#include<stdio.h>
#define SIZE 5
int main(void)
{
	int a[SIZE][SIZE];
	int i,j,ct,s,n=0; 
	
	/*��ü�迭 �ʱ�ȭ*/
	for(i=0; i<SIZE; i++){
	for(j=0; j<SIZE; j++){
		a[i][j]=0;
	}
		}
	
	ct=SIZE/2;//�߾Ӱ� ����  
			
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
	
	/*�����Է� Ȯ�θ��-Ȯ�οϷ�*/ 
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("[%d][%d] %d	",i,j,a[i][j]);
		}
			printf("\n");
			}
			
	}
