#include <stdio.h>

int main(void)
{
	double CGS, CLV;
	double Ctime;
	
	Ctime=1;
	
	printf("���� �����Ȳ�� �����?(1�� ȥ��, 2�� ����)");
	scanf("%lf", &CGS);
	
	if(CGS < 1.5){
	printf("ȥ�⵵�� ��ü������ �Է����ּ���(1 ����, 2 �ɰ�)");
	scanf("%lf", &CLV);
	if(CLV < 1.5){
	Ctime = Ctime * 0.7;}
	else if(CLV > 1.5){
	Ctime = Ctime * 0.5;}
    }
	
	printf("%lf",Ctime);
	return 0;
} 
