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
	
	printf("나무 높이 입력\n");
	scanf("%lf", &h);
	
	printf("나무까지의 거리 \n");
	scanf("%lf", &dis);
	
	printf("나무 정상과 이루는 각 구하기\n");
	printf("각도: %lf\n",ANGL(h, dis));
}
