#include<stdio.h>
#define SIZE 5
int main(void)
{	
	/*���� �ð��� ���õ� ��� �Է� �״�� ���*/ 
	int a[SIZE][SIZE];
	int i,j,y=0,n=0;
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			a[i][j]=++n;
		}
			}		

	/*1,3,5��° ���� ���ϱ�*/				
	for(i=0; i<SIZE; i+=2){
		for(j=1; j<SIZE; j+=2)
			y+=a[i][j];
		
	}
	
	/*2,4��° ���� ���ϱ�*/ 
	for(i=1; i<SIZE; i+=2){
		for(j=0; j<SIZE; j+=2)
			y+=a[i][j];
	}

	printf("Sum of Right Diagonal=%d\n",y);
	
}
