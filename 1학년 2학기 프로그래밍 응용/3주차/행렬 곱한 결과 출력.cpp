#include<stdio.h>
void MULX(int s[3][2], int x[2][4]){
	int m;
	int i,w;
	
	printf("���ϰ��� �ϴ� ���� �Է�: ");
	scanf("%d", &m);
	
	//a ���ϱ� 
	printf("\n��� 3*2 ���ϱ� %d\n", m);
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("[%d][%d]: %d	", i, w, s[i][w]*m);
		}
		printf("\n");
	}
	
	//b ���ϱ� 
	printf("\n��� 2*4 ���ϱ� %d\n", m);
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
	
	//��� a �Է¹ޱ� 
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("a[%d][%d]�Է�: ", i, w);
		scanf("%d", &a[i][w]);
		}
		printf("\n");
	}
	
	//��� a ���  
	for(i=0; i<3; i++){
		for(w=0; w<2; w++){
		printf("a[%d][%d]: %d	", i, w, a[i][w]);
		}
		printf("\n\n");
	}
	
	//��� b �Է¹ޱ� 
	for(i=0; i<2; i++){
		for(w=0; w<4; w++){
		printf("b[%d][%d]�Է�: ", w, i);
		scanf("%d", &b[i][w]);
		}
		printf("\n");
	}
	
	//��� b ��� 
	for(i=0; i<2; i++){
		for(w=0; w<4; w++){
		printf("b[%d][%d]: %d	", i, w, b[i][w]);
		}
		printf("\n");
	}
	
	MULX(a,b);
}
