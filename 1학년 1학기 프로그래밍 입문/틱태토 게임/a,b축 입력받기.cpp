#include<stdio.h>

int main(void){
	
	int a, b; //������ ��ǥ �� 
	char board[3][3];
	char user; //���� Ȯ��
	
	/*a, b �� �Է¹ޱ�*/
	a=0; //�ʱ�ȭ 
	b=0; 
	printf("�Է��� ���ϴ� ��ǥ�� �Է����ּ���.\n");
	while(1){
    printf("����:\n");
    scanf("%d", &a);
    if(a>3){
    	printf("1�� 3���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	while(1){
    printf("����:\n");
    scanf("%d", &b); 
    if(b>3){
    	printf("1�� 3���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	printf("a: %d b: %d\n", a, b); // �Է� ���� Ȯ�� ���
	
	a=a-1;
	b=b-1;
	
	printf("a: %d b: %d\n", a, b); // �Է� ���� Ȯ�� ���
	
	return 0;
    }
