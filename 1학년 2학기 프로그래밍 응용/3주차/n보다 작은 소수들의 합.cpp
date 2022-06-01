#include<stdio.h>

int PRIM(int n){
	int i, a;
	int t[1000];
	int sum=0;
	
	//t[i] 초기화  
	for(i=0; i<n+1; i++){
		t[i]=i;
	}
	
	for(i=2; i<n+1; i++){
		for(a=2; a<t[i]; a++){
			if(t[i]%a == 0){
				t[i]=0;
			}
		}
	}
	
	//총합 구하기 
	for(i=2; i<n+1; i++){
	sum=sum+t[i];
	}
	
	return sum;
}

int main(){
	int a;
	
	printf("1000미만의 정수 입력:");
	scanf("%d", &a);
	
	printf("%d보다 작은 소수들의 총합: %d", a, PRIM(a));
}
