#include<stdio.h>
#define SIZE 10
/*�¼� ��ġǥ ���*/

int main(void)
{
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
	int i, a;
	char seats[SIZE];
	
	/*seats�� y�Է�*/ 
	for(a=0; a<10; a++){
		seats[a]='y';
	}
	
	printf("���� ���� ������ �¼��Դϴ�.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	 return 0;
 } 
