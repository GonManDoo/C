#include<stdio.h>

#define max 9
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
	printf("Start:	%d\nEnd:	%d\nPivot:	%d\n\n", l, h, m);
}


void quicksort(int a[], int s, int e){
	int temp;
	int p=s;//pivot을 첫번째 값으로 지정 
	int k=e-s;
	int L, S;
	int i, n;
	
	/*LARGE*/
	for(i=s; i<e+1;	i++){
		if(a[s]<a[i]){//LARGE 찾으면 
			L=i;//LARGE로 고정하고 
			break;//FOR문 종료 
		}
		else if(i==e){//끝까지 갔는데도 없으면 
			temp=a[s];//a[s]랑 a[e]랑 바꿈:a[s]가 가장 크다는 뜻이므로 
			a[s]=a[i];
			a[i]=temp;
			return;//그리고 끝냄 
		}
	}
	
	/*SMALL*/
	for(i=e; i>s-1; i--){
		if(a[s]>a[i]){
			S=i;
			break;
		}
		if(i==s){
			temp=a[s];//a[s]랑 a[L-1]이랑 바꿈 
			a[s]=a[L-1];
			a[L-1]=temp; 
			return ;//라지만 있으면, 라지 왼쪽에 값 넣고 끝냄 
		}
	}
	
	quicksort(arr, 1, p-1);
	quicksort(aar, p+1, e);
	
	
}


int main(){
	int i;

	int a[max]={66,33,88,44,99,77,11,55,22};
	
	int b[max]={99,88,77,66,55,44,33,22,11};
	
	printArr(a, 0, max, 1);
	printArr(b, 0, max, 1);
}
