#include<stdio.h>
int cnt=0;//비교횟수 카운터
int ant=0;//정렬횟수 카운터

void check(int a){
	printf("checking sign %d\n", a);
} 

//배열 출력 모듈 l부터 m까지 출력한다. t는 출력 후 줄 바꿈 여부, 1일 경우 엔터 시행. 
void printArr(int a[], int l, int m, int t){
	int i;
	for(i=l-1; i<m; i++){
		printf(" %d", a[i]);
	}
	if(t==1){
		printf("\n");
	}
}

int loc(int p){//바로 윗 트리의 좌표 
	 int temp1;
	 
	 temp1=p/2;//몫 저장 
	
	 return p-(temp1+1);
}

int locdown1(int p){//바로 왼쪽 아래 트리의 좌표 
	int temp;
	
	temp=p;
	temp=p+p+1;
	
	return temp;
}

int locdown(int p, int t){//바로 왼쪽 아래 트리의 좌표 
	int temp;
	
	if(p==t-1){
		printf("최저 노드 도달\n");
		return 0;
	}
	else if(locdown1(p)>=t){
		printf("더 이상 좌측에 노드가 없습니다\n");
		return 0;
	}
	else if(locdown1(p)+1>=t){
		printf("더 이상 우측에 노드가 없습니다."); 
		return 0;
	}
	
	temp=p;
	temp=p+p+1;
	
	return temp;
}

void siftup(int k[], int t){
	int i;
	int temp;
	
	if(t==0){
		printf("재귀 또는 함수가 종료됨: t가 최상위 노드\n");
		return;
	}
	cnt++;//비교하면 세고 
	if(k[t]>k[loc(t)]){
		ant++; //정렬하면 세기 
		
		temp=k[loc(t)];//상위 노드 값 따로 빼고 
		k[loc(t)]=k[t];//상위 노드와 교체 
		k[t]=temp;
		
		printArr(k, 1, 9, 1);
		
		t=loc(t);//상위 노드 좌표를 받아서
		siftup(k, t);//재귀 
	}
	else{
		return;//안크면 나가리
	}
	
} 

/*정렬 수행*/ 
void siftdown1(int k[], int i, int t){
	int temp;
	if(locdown(i, t)==0){
		return;
	}
	if(k[locdown(i, t)]>=k[locdown(i, t)+1]){//왼쪽이 더 크거나 같으면
	cnt++;
		if((k[locdown(i, t)])>k[i]){//왼쪽이 현재 k[i]보다 크면
			ant++;
			temp=k[locdown(i, t)];//왼쪽꺼 빼두고 
			k[locdown(i, t)]=k[i];//왼쪽으로 내리고 
			k[i]=temp;//기존 왼쪽거 위로 올림 
			
			printArr(k, 1, 9, 1);
		
			i=locdown(i, t);//시행 후 i 좌표 왼쪽 아래로 옮김
			siftdown1(k, i, t);//재귀 
			return;
		}
		return;
	}
	else{//오른쪽이 더 크면  
	cnt++;
		if(k[locdown(i, t)+1]>k[i]){
			ant++;
			temp=k[locdown(i, t)+1];//오른쪽꺼 빼두고 
			k[locdown(i, t)+1]=k[i];//오른쪽으로 내리고 
			k[i]=temp;//기존 오른쪽거 위로 올림
			
			printArr(k, 1, 9, 1);
			
			i=locdown(i, t)+1;//시행 후 i 좌표 왼쪽 아래로 옮김
			siftdown1(k, i, t);//재귀 
			return;
		} 
		return;
	}
	return;
}

void siftdown(int k[], int t, int i){//i가 현재 내려야 하는 숫자의 좌표임 
	int temp;
	
	if(k[0]<k[t]){
		return;
	}
	
	temp=k[0];
	k[0]=k[t];
	k[t]=temp;

	printArr(k, 1, t+1, 1);

	siftdown1(k, i, t);
}

int main(void){
	int n;
	int a[9]={11, 22, 33, 44, 55, 66, 77, 88, 99};
	
	for(n=1; n<9; n++){
		printf("\ni=%d:	",n);
		siftup(a, n);
	}
	
	printf("\n#siftup#수행 결과\n");
	printArr(a, 1, 9, 1);
	printf("\n#siftup#\n비교횟수: %d회\n정렬횟수: %d회\n", cnt, ant);
	
	for(n=8; n>0; n--){
		printf("\n\ni=%d:	",n);
		siftdown(a, n, 0);
	}
	
	printf("\n#siftdown#수행 결과\n");
	printArr(a, 1, 9, 1);
	printf("\n#siftdown#\n비교횟수: %d회\n정렬횟수: %d회\n", cnt, ant);
	
	
}
