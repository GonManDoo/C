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
	
	printf("������ �Է��ϼ���\n");
	scanf("%d", &a);
	printf("���� ���� �Է��ϼ���\n");
	scanf("%f", &b);
	printf("���� ����  �Է��ϼ���\n");
	scanf("%lf", &c);
	
	A.r=a;
	printf("%d\n", A.r);
	A.rr=b;
	printf("%f\n", A.rr);
	A.rrr=c;
	printf("%lf\n", A.rrr);
	
	
	A.rr=a*a*3.14;
	printf("����: %f\n", A.rr);
	A.rrr=4/3*a*a*a*3.14;
	printf("���� ����:%lf\n", A.rrr);
}
