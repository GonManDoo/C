#include <stdio.h>

int main(void)
{
	int A, i, rest; //�Է¹��� ����, ������ ��, ������ ��
	
	
	/*���� �Է¹ޱ�*/
	printf("�Ҽ� �Ǻ��� ���ϴ� ���ڸ� �Է����ּ���.\n");
	scanf("%d",&A); 
	
	/*main ó�� ��Ʈ*/ 
	for(i=2; i<A; i++) //������ �� ���� 
	{
		rest= A%i; //������ ������ ���� 
		
		//�������� 0�� �Ǵ��� 
		if(rest==0){ 
		printf("�Ҽ��� �ƴմϴ�.\n");
		break;}
		
		else{
		printf("ó����\n");}
	 } 
	 //�Ϻ��ϰ� ����ߴٸ� 
	 if(i == A)
	 printf("�Ҽ��� �½��ϴ�.\n");
	 
	 return 0; 
	 
}
