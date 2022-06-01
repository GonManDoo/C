#include <stdio.h>

/* 목적지까지의 교통편을 출력하는 프로그램 */
/* 입력과 출력이 있어야함 */ 
/* 입력은 거리, 시간 , 출력은 추천 교통편으로 */ 
int main(void)
{
	double time, distance, speed, ntime;
	double congestion, conlv;
	printf("지금부터 교통편 추천을 시작하겠습니다.\n");
	
	/* 시간 입력 */ 
	printf("이동에 사용할 수 있는 시간(분)을 입력해주세요.\n");
	scanf("%lf",&time);
	
	/* 교통의 혼잡도*/
	printf("현재 교통상황이 어떤가요?(혼잡은 1, 원할은 2)\n");
	    scanf("%lf", &congestion);
	
    	if(congestion>1){(ntime=time*1);
	    }else {printf("혼잡도의 정도는 어떤가요?(심각은 1, 보통은 2)\n");} //혼잡도 정도 구하기 
	     scanf("%lf", &conlv); //혼잡도 정도 입력받기 
		 if (conlv<2){(ntime=time*0.5); //혼잡도 정도 심각 
		 }else{(ntime=time*0.7); //혼잡도 정도 보통  
         }
		/* 거리 입력 */ 
    printf("목적지까지의 거리(km)를 입력해주세요.\n");
	scanf("%lf", &distance); 
	/* 필요한 속력(시속) 구하기 */
	speed = distance /ntime * 60;
	/* 필요한 속력 안내 */
	printf("당신이 필요로 하는 시간은 시속 %lf km 입니다.\n", speed);
    /* 조건문 */
			if (speed>50){
			printf("시외버스, 택시, 자가용을 이용하세요.");
			}else if (speed>20){
			printf("시외버스, 택시, 자가용, 지하철을 이용하세요.");
			}else if (speed>15){
			printf("시외버스, 택시, 자가용, 지하철, 시내버스를 이용하세요.");
			}else if (speed>5){
				printf("시외버스, 택시, 자가용, 지하철, 시내버스, 자전거를 이용하세요.");
				}else if (speed>0){
					printf("시외버스, 택시, 자가용, 지하철, 시내버스, 자전거, 보행을 이용하세요.");
			}
				return 0; 
			
}

