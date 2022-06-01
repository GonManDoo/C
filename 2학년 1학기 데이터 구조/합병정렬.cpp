#include<stdio.h>
//divide and conquer 분할 정복 
#define max 8
#define SIZE 1024

int cnt=0;//비교 횟수 카운터 
int ant=0;//정렬 횟수 카운터 

void check(int a){
	printf("checking sign %d\n", a);
} 

//배열 출력 모듈 l부터 m까지 출력한다. t는 출력 후 줄 바꿈 여부, 1일 경우 엔터 시행. 
void printArr(int a[], int l, int m, int t){
	int i;
	printf("%d", a[l]);
	for(i=l+1; i<m; i++){
		printf(" %d", a[i]);
	}
	if(t==1){
		printf("\n");
	}
}

//현재 상태 체크 모듈 
void prtnow(int l, int m, int h){
	printf("Low:	%d\nHigh:	%d\nMid:	%d\n\n", l, h, m);
}

//conquer 
void merge(int a[], int low, int mid, int high) {
	
	prtnow(low, mid, high);
     
    int i, n;
    int L, R;
    int temp[SIZE]; 
    
    L=low;//좌측 배열 시작점 
    R=mid+1;//우측 배열 시작점
    i=low; 
 
 	//비교 후 temp로 정렬 
    while(L<=mid&&R<=high){
    	check(1);
    	if(a[L]<=a[R]){
    		ant++;
    		cnt++;
    		check(2);
    		temp[i]=a[L];
    		printf("temp[%d]: %d\n", i, temp[i]);
    		i++;
    		L++;
		}
		else{
			check(3);
			ant++;
			cnt++;
			temp[i]=a[R];
			printf("temp[%d]: %d\n", i, temp[i]);
			i++;
			R++;
		}
		check(4);
	}
	for(; L<=mid; L++, i++){
		check(5);
		ant++;
		temp[i]=a[L];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	for(; R<=high; R++, i++){
		check(6);
		ant++;
		temp[i]=a[R];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	for(i=low; i<=high; i++){
		check(7);
		a[i]=temp[i];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	check(8);
}

//divide
void mergesort(int a[], int low, int high){
	int m = (low + high)/2;//low와 high 사이의 중간 값을 구하고, 중간 값은 low에 가깝게 한다. 
	prtnow(low, m, high);//현재 함수의 low high mid를 파악하고 
	cnt++;//비교 직전에 넣음 
	if(low<high){//low가 high보다 작을 떄 
		//left
		printf("의 [left]\n");
		mergesort(a, low, m);//다시 low부터 m까지 sort하고 
		//right
		prtnow(low, m, high);//현재 함수의 low high mid를 파악하고 
		printf("의 [right]\n");
		mergesort(a, m+1, high);//다시 m+1부터 high까지 sort함 
		
		
		printf("\nEnd Of Dividing\n\n");
		 
		//여기까지 모든 dividing이 끝나면 
		//conquer 병합을 실시한다.
		printArr(a, low, high+1, 0);
		printf("에 대한 merge 실행결과\n");
		merge(a, low, m, high);
		printArr(a, low, high+1, 1);
		printf("\n");
	}
	else{//low가 high보다 크면 말이 안되고, 같으면 현재 1개밖에 없으므로 더 이상 쪼갤 필요가 없음 따라서 종료함. 
		printArr(a, low, high+1, 0);
		printf("에 대한 ");
		if(low==high){
			printf("종료 이유: low와 high값 같음: 더이상 쪼갤 필요가 없음\n");
			printf("상세:	low가 %d, high가 %d입니다.\n\n", low, high);
		} 
		else{
			printf("종료 이유: low가 high보다 큼: 오류\n");
			printf("상세:	low가 %d, high가 %d입니다.\n\n", low, high);
		}
		return;
	}
}

int main(){
	int i;

	int a[max]={99,55,88,33,77,44,66,22};
	
	int b[max]={55,44,33,22,99,88,77,66};
	printArr(a, 0, max, 1);
	
	mergesort(a, 0, max-1);
	
	printArr(a, 0, max, 1);
	
	printf("배열 a의 총 비교 횟수:	%d\n", cnt);
	
	printf("배열 a의 총 정렬 횟수:	%d\n", ant);

	printf("\n\n\n\n\n\n\n\n\n\n");
	
	cnt=0;
	ant=0;
	
	printArr(b, 0, max, 1);
	
	mergesort(b, 0, max-1);
	
	printArr(b, 0, max, 1);
	
	printf("배열 b의 총 비교 횟수:	%d\n", cnt);
	
	printf("배열 b의 총 정렬 횟수:	%d\n", ant);
	
}
