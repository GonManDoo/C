#include<stdio.h>
int last(int a, int b, int x){
	if(b==1){
		a=a-a-a; //���� ���������� �ٽ� ������ ����
		return a+x;
	}
	else if(b<1){
		return a+x;
	}
}

void NEAR(int S[10], int x){
	int i,a;
	int temp;
	int tem[10]; 
	
	//tem �� �ʱ�ȭ 
	for(i=0; i<10; i++){
			tem[i]=0;
			}

	//������ ������ x�� �� 
	for(i=0; i<10; i++){
		S[i]=S[i]-x;
		}
	
	//���� �� ��� �������� �ٲٰ�, tem �� 1�� ���� 
	for(i=0; i<10; i++){
		if(S[i]<=0){
			S[i]=S[i]-S[i]-S[i];
			tem[i]=1;
			}
		}
	
	//������� �迭, �ٲ� �� tem���� �ٲ� 
	for(a=0; a<10; a++){
		for(i=0; i<9; i++){
			if(S[i]>S[i+1]){
				temp=S[i];
				S[i]=S[i+1];
				S[i+1]=temp;
				
				temp=tem[i];
				tem[i]=tem[i+1];
				tem[i+1]=temp; 
			}
		}
		}
		
	printf("�Է��� ������ ���� ����� ��: %d", last(S[0], tem[0], x) );

}

int main(){
	int D[10];
	int i,A;

	while(1){
		printf("���� ������ �ϳ� �Է����ּ���.\n");
		scanf("%d",&A);
		if(A<0){
			printf("���� ������ �Է��Ͻ� �� �����ϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if(A>=0){
			printf("���� �Է� Ȯ�� �Ϸ�\n\n\n");
			break;
		}
	}

		printf("�迭 ���� �Է��� �����մϴ�.\n\n");
		
	for(i=0; i<10; i++){
		
		while(1){
			printf("%d��° ���ڸ� �Է��ϼ���.\n", i+1);
			scanf("%d", &D[i]);
			if(D[i]<=0){
				printf("���� ������ 0�� �Է��Ͻ� �� �����ϴ�.\n");
				printf("�ٽ� �Է����ּ���.\n\n");
			}
			else if(D[i]>=0){
				printf("���� �Է� Ȯ�� �Ϸ�\n\n\n");
				break;
			}
		}		
	}
	printf("10���� ���� ��� �Է� �Ϸ�\n\n");
	
	printf("10���� ���� �� ó���� �Է��� ������ ���� ����� ���� ����մϴ�.\n");
	NEAR(D, A);
}
