#include<stdio.h>
#define SIZE 10

int main(void){
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
	int i, a; //i�� �¼� �ʱ�ȭ ����, a�� �迭 ��� ���� 
	char seats[SIZE];
	int b; //b�� ���� �¼� �迭 ��� ����
	
	 printf("���Ͻô� �¼��� �̸��� �Է����ּ���.\n");
	 scanf("%d", &b);
	 
	 if(b<11){
	 	seats[b]='n';
	 }
	 else printf("�߸��� �¼� ��ȣ�Դϴ�.  �ٽ��ѹ� �õ����ּ���.");
	 
	 return 0; 
}
