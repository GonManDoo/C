#include <stdio.h>

int main()
{
	double x, y, result;
	
	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);
	
	result = x + y;
	printf("%lf + %lf = %lf", x, y, result);
	
	result = x / y;
	printf("%lf / %lf = %lf", x, y, result);
	
	return 0;
}
