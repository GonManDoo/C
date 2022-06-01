#include<stdio.h>
	union ball{
		int r;
		float rr;
		double rrr;
	};

int main(void){
	union ball A, *ptr;
	ptr=&A;
	int a;
	float b;
	double c;
	
	printf("반지름 입력하세요\n");
	scanf("%d", &a);
	printf("원의 넓이 입력하세요\n");
	scanf("%f", &b);
	printf("구의 부피  입력하세요\n");
	scanf("%lf", &c);
	
	A.r=a;
	printf("%d\n", A.r);
	A.rr=b;
	printf("%f\n", A.rr);
	A.rrr=c;
	printf("%lf\n", A.rrr);
	
	
	A.rr=a*a*3.14;
	printf("넓이: %f\n", A.rr);
	A.rrr=4/3*a*a*a*3.14;
	printf("구의 부피:%lf\n", A.rrr);
}
