#include <stdio.h>

int main(void)
{
	int a, b, c, d; // a�� b��, c�� d�� 
	
	printf("��� �ð�(a�� b��)�� �Է��ϼ���.\n");
	printf("a��\n");
	scanf("%d", &a);
	printf("b��\n");
	scanf("%d", &b);	
	
	printf("���� �ð�(c�� d��)�� �Է��ϼ���.\n");
	printf("c��\n");
	scanf("%d", &c);
	printf("d��\n");
	scanf("%d", &d);
	
	printf("%d %d %d %d", a, b, c, d);

    return 0;
 } 
