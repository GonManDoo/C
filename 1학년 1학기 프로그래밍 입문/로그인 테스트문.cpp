#include <stdio.h>

int main(void)
{
	int count;
	char id[20], pw[20];
	int ic, pc;
	
	for(count=1; count<6; count++)
	{
		printf("���̵�\n");
		scanf("%c", &id);
		
		printf("��й�ȣ\n");
		scanf("%c", &pw);
		
		if(id=="computer")
		ic=1;
		else
		printf("���̵� Ʋ��\n");
		
		if(pw=="pizza")
		pc=1;
		else
		printf("��� Ʋ��\n");
		
		if(ic==1, pc==1)
		break; 
	}
	if(count==5)
	printf("�α��� ����\n");
	else
	printf("�α��� ����\n");
	
	return 0;
}
