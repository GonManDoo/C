#include<stdio.h>
#define SIZE 5

int main(void){
	int a[SIZE][SIZE];
	int i,b,j,y=0,n=25;
	b=0;
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			a[i][j]=n--;
		}
			}
	
	/*�����Է� Ȯ�� ���-üũ �Ϸ�*/		
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("%d	",a[i][j]);
		}
			printf("\n");
			}
			
	for(i=0; i<SIZE; i+=4){
		for(j=0; j<SIZE; j++){
			if(j!=2){
				y+=a[i][j];
				/*�����Է� Ȯ�� ���-üũ �Ϸ�*/ 
				printf("[%d][%d]Sum of Right Diagonal=%d\n",i,j,y);
			}
		}
	}
	
	for(i=1; i<SIZE; i+=2){
		for(j=0; j<SIZE; j++){
			if(j==0){
				y+=a[i][j];
				/*�����Է� Ȯ�� ���-üũ �Ϸ�*/ 
				printf("[%d][%d]Sum of Right Diagonal=%d\n",i,j,y);
			}
			if(j==4){
				y+=a[i][j];
				/*�����Է� Ȯ�� ���-üũ �Ϸ�*/ 
				printf("[%d][%d]Sum of Right Diagonal=%d\n",i,j,y);
			}
		}
	}
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			b+=a[i][j];
				/*�����Է� Ȯ�� ���-üũ �Ϸ�*/ 
				printf("[%d][%d]Sum of Right Diagonal=%d\n",i,j,a[i][j]);
				printf("\n Sum of Right Diagonal=%d\n\n",b);
		}
	}
	printf("\n Sum of Right Diagonal=%d\n\n",b);
	
	b-=y;
	
	printf("Sum of Right Diagonal=%d\n",b);
		
} 
