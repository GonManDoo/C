#include<stdio.h>
#define SIZE 10

int main(void)
{
	int want; //�¼� ���� ����  
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10}; //�¼� �̸� �迭 
	int i, a; //i�� �¼� �ʱ�ȭ ����, a�� �迭 ��� ���� 
	char seats[SIZE]; //�¼� ���� ���� 
	int b; //b�� ���� �¼� �迭 ��� ����
	
	/*seats�� y�Է�*/ 
	for(a=0; a<10; a++){
		seats[a]='y';
	}
	/*�ٽ� �ѹ� ������ ���α׷�*/
	while(1){
	printf("�¼� ������ ���Ͻø� ����1, ���Ḧ ���Ͻø� ����2�� �Է����ּ���.\n");
	scanf("%d",&want);
	
	if(want==2){
	return 0;}
	
	/*�¼� ��ġǥ*/ 
	printf("���� ���� ������ �¼��Դϴ�.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	
	/*�����¼��Է�*/ 
	printf("���Ͻô� �¼��� �̸��� �Է����ּ���.\n");
	 scanf("%d", &b);
	 
	 if(b<11){
	 	seats[b-1]='n';
	 	
	 	printf("������ �Ϸ�Ǿ����ϴ�.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	 }
	 else printf("�߸��� �¼� ��ȣ�Դϴ�.  �ٽ��ѹ� �õ����ּ���.");
}
	
	return 0;
 } 
