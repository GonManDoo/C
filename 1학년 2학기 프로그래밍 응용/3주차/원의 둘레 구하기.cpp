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
	
	printf("원의 반지름 길이: ");
	scanf("%lf", &r);
	
	printf("원의 둘레: %lf", CRCL(r));
}
