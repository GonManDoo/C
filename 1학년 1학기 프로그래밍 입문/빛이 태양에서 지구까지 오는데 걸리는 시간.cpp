#include <stdio.h>

int main(void)
{
	float Speed, Distance, Time; //변수 선언
	
	 printf(" 빛의 속도를 입력하시오: "); //입력 안내문
	 scanf("%f", &Speed);
	 printf(" 지구와 태양 사이의 거리를 입력하시오: "); //입력 안내문
	 scanf("%f", &Distance);
	 Time = Distance / Speed; // 시간 계산 
	printf("태양에서 오는 빛이 지구에 도달하기 까지 %f초 걸립니다.", Time);
	
	return 0;
}
