#include<stdio.h>

/*���� 10���� ����� �迭�� �Ű����� S[]�� ���޹޾� ���� �� 
2��°�� ���� ���� ����ϴ� �Լ� SNDM�� �ۼ��Ͻÿ�*/ 

void SNDM(int S[10]){
	int i,a;
	int temp;
	for(a=0; a<10; a++){
		for(i=0; i<9; i++){
			if(S[i]>S[i+1]){
				temp=S[i];
				S[i]=S[i+1];
				S[i+1]=temp;
			}
		}	
		}
	
	printf("2������ ���� ��: %d",S[1]);
}

int main(){
	int D[10];
	int i;
	for(i=0; i<10; i++){
		printf("%d��° ���ڸ� �Է��ϼ���.\n", i+1);
		scanf("%d", &D[i]);
	}
	printf("10���� ���� ��� �Է� �Ϸ�\n\n");
	printf("2��°�� ���� ���� ����մϴ�.\n");
	SNDM( D );
}
