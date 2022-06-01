#include<stdio.h>
#define SIZE 4
int main(void)
{
	int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], d[SIZE][SIZE];
	int i,j,n=0;
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			a[i][j]=++n;
			b[i][j]=0;
			c[i][j]=0;
			d[i][j]=0;
		}
	}
	
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			b[SIZE-1-j][i]=a[i][j];
		}
	}

	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			c[SIZE-1-j][i]=b[i][j];
		}
	}
	
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			d[SIZE-1-j][i]=c[i][j];
		}
	}
	
	printf("A=\n");
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("%3d",a[i][j]);
			if(j==SIZE-1) printf("\n");
		}
	}
	
	printf("\nB=\n");
	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE; j++){
			printf("%3d",d[i][j]);
			if(j==SIZE-1) printf("\n");
		}
	}
	
}
