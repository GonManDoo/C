#include<stdio.h>
#define SIZE 5
int main(void)
{
	int a[SIZE][SIZE];
	int i,j,ct,s,n=0; 
	
	/*전체배열 초기화*/
	for(i=0; i<SIZE; i++){
	for(j=0; j<SIZE; j++){
		a[i][j]=0;
	}
		}
	
	ct=SIZE/2;//중앙값 지정  
			
	for(j=0; j<SIZE; j++){
		if(j<=ct){
			s=j;
				}
		else{
			s=SIZE-j-1;
				}
	for(i=s; i<SIZE; i++){
		a[i][j]=++n;
	}
		}
	
	/*정상입력 확인모듈-확인완료*/ 
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("[%d][%d] %d	",i,j,a[i][j]);
		}
			printf("\n");
			}
			
	}
