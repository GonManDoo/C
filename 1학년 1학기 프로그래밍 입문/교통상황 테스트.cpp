#include <stdio.h>

int main(void)
{
	double CGS, CLV;
	double Ctime;
	
	Ctime=1;
	
	printf("현재 교통상황이 어떤가요?(1은 혼잡, 2는 보통)");
	scanf("%lf", &CGS);
	
	if(CGS < 1.5){
	printf("혼잡도를 구체적으로 입력해주세요(1 보통, 2 심각)");
	scanf("%lf", &CLV);
	if(CLV < 1.5){
	Ctime = Ctime * 0.7;}
	else if(CLV > 1.5){
	Ctime = Ctime * 0.5;}
    }
	
	printf("%lf",Ctime);
	return 0;
} 
