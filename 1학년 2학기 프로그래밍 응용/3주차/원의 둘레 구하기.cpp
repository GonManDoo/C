#include<stdio.h>
double CRCL(double r){
	double m;
	printf("r: %lf\n", r);	
	
	m=r*r*3.14;
	
	printf("m: %lf\n", m);
	
	return m;
}

int main(){
	double r;
	double A;
	
	printf("���� ������ ����: ");
	scanf("%lf", &r);
	
	printf("���� �ѷ�: %lf", CRCL(r));
}
