#include <stdio.h>

int main(void)
{
	float Speed, Distance, Time; //���� ����
	
	 printf(" ���� �ӵ��� �Է��Ͻÿ�: "); //�Է� �ȳ���
	 scanf("%f", &Speed);
	 printf(" ������ �¾� ������ �Ÿ��� �Է��Ͻÿ�: "); //�Է� �ȳ���
	 scanf("%f", &Distance);
	 Time = Distance / Speed; // �ð� ��� 
	printf("�¾翡�� ���� ���� ������ �����ϱ� ���� %f�� �ɸ��ϴ�.", Time);
	
	return 0;
}
