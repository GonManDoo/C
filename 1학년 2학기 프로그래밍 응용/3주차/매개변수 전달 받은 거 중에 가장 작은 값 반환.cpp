#include<stdio.h>
int MINX(int s[3][4]){
	int i, w, temp;
	int S[12];
	int t=0;
	
	//1���� �迭�� �ű��  
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		S[t]=s[i][w];
		t++;
		}
	}
	
	//1���� �迭���� ����
	for(i=0; i<12; i++){
		for(w=0; w<11; w++){
			if(S[w]>S[w+1]){
				temp=S[w];
				S[w]=S[w+1];
				S[w+1]=temp;
			}
		}	
		}
	
	return S[0];
}

int main(){
	int a[3][4];
	int i, w;
	int C;
	
	//��� a �Է¹ޱ� 
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		printf("a[%d][%d]�Է�: ", i, w);
		scanf("%d", &a[i][w]);
		}
		printf("\n");
	}
	
	//��� a ���  
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		printf("a[%d][%d]: %d	", i, w, a[i][w]);
		}
		printf("\n\n");
	}
	
	C=MINX(a);
	
	printf("����� ���ҵ� �� ���� ���� ��: %d\n", C);
}
