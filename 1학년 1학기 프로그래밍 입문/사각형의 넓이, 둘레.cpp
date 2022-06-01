#include <stdio.h>

int main(void)
{
	double w, h, area, perimeter; //변수 선언 
	printf("사각형의 너비를 입력하시오: "); //입력 안내문 
	scanf("%lf", &w);
	
	printf("사각형의 가로를 입력하시오: "); //입력 안내문 
	scanf("%lf", &h);
	
	area = w*h; //면적 구하기
	perimeter = 2*(w+h);  // 둘레 구하기
	
	printf("사각형의 면적: %lf, 사각형의 둘레: %lf", area, perimeter); //출력 
	
	return 0; 
 }
