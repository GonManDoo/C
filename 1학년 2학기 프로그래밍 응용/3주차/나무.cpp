#include<stdio.h>
#include<math.h>

#define PI 3.141592

double ANGL(double h, double dis){
	double a;
	a=asin(h*PI/dis);
	
	return a;
}

int main(){
	double h;
	double dis;
	double deg;
	
	printf("���� ���� �Է�\n");
	scanf("%lf", &h);
	
	printf("���������� �Ÿ� \n");
	scanf("%lf", &dis);
	
	printf("���� ����� �̷�� �� ���ϱ�\n");
	printf("����: %lf\n",ANGL(h, dis));
}
