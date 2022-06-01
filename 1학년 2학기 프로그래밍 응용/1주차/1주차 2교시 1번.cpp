#include<stdio.h>
#define SIZE 5
int main(void)
{	
	/*수업 시간에 제시된 행렬 입력 그대로 사용*/ 
	int a[SIZE][SIZE];
	int i,j,y=0,n=0;
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			a[i][j]=++n;
		}
			}		

	/*1,3,5번째 값들 더하기*/				
	for(i=0; i<SIZE; i+=2){
		for(j=1; j<SIZE; j+=2)
			y+=a[i][j];
		
	}
	
	/*2,4번째 값들 더하기*/ 
	for(i=1; i<SIZE; i+=2){
		for(j=0; j<SIZE; j+=2)
			y+=a[i][j];
	}

	printf("Sum of Right Diagonal=%d\n",y);
	
}
