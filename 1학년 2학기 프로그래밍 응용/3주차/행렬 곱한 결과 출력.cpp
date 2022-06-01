#include<stdio.h>
void MULX(int s[3][2], int x[2][4]){
	int m;
	int i,w;
	
	printf("곱하고자 하는 숫자 입력: ");
	scanf("%d", &m);
	
	//a 곱하기 
	printf("\n행렬 3*2 곱하기 %d\n", m);
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("[%d][%d]: %d	", i, w, s[i][w]*m);
		}
		printf("\n");
	}
	
	//b 곱하기 
	printf("\n행렬 2*4 곱하기 %d\n", m);
	for(i=0; i<2; i++){
		for(w=0; w<4; w++){
		printf("[%d][%d]: %d	", i, w, x[i][w]*m);
		}
		printf("\n");
	}
	
	
}

int main(){
	int a[3][2];
	int b[2][4];
	int i, w;
	
	//행렬 a 입력받기 
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("a[%d][%d]입력: ", i, w);
		scanf("%d", &a[i][w]);
		}
		printf("\n");
	}
	
	//행렬 a 출력  
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("a[%d][%d]: %d	", i, w, a[i][w]);
		}
		printf("\n\n");
	}
	
	//행렬 b 입력받기 
	for(i=0; i<2; i++){
		for(w=0; w<4; w++){
		printf("b[%d][%d]입력: ", w, i);
		scanf("%d", &b[i][w]);
		}
		printf("\n");
	}
	
	//행렬 b 출력 
	for(i=0; i<2; i++){
		for(w=0; w<4; w++){
		printf("b[%d][%d]: %d	", i, w, b[i][w]);
		}
		printf("\n");
	}
	
	MULX(a,b);
}
