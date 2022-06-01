#include <stdio.h>

int main(void)
{
	float A;
	double B;
	printf("1.0을 입력하시오.");
	scanf("%f", &A);
	printf("3.0을 입력하시오.");
	scanf("%lf", &B);
	
	printf("1.0은 %f가 되었고3.0은 %lf가 되었다.", A, B); 
	return 0;
	
 } 
