#include <stdio.h>

int main(void)
{
	double w, h, area, perimeter; //���� ���� 
	printf("�簢���� �ʺ� �Է��Ͻÿ�: "); //�Է� �ȳ��� 
	scanf("%lf", &w);
	
	printf("�簢���� ���θ� �Է��Ͻÿ�: "); //�Է� �ȳ��� 
	scanf("%lf", &h);
	
	area = w*h; //���� ���ϱ�
	perimeter = 2*(w+h);  // �ѷ� ���ϱ�
	
	printf("�簢���� ����: %lf, �簢���� �ѷ�: %lf", area, perimeter); //��� 
	
	return 0; 
 }
