#include <stdio.h>

int main(void)
{
	int a, b, c, d; // a시 b분, c시 d분 
	double Ctime, Dis, NS; //소요 시간, 거리, 필요 속력 
	double CGS, CLV; //교통 상황, 혼잡도 
	
	/* 시작 안내문 */
	printf("지금부터 교통편 안내를 시작하겠습니다.\n");
	
	/* 시각 입력 */
	printf("출발 시각(a시 b분)을 입력하세요.\n");
	printf("24시로 작성해주세요.\n");
	printf("a시\n");
	scanf("%d", &a);
	printf("b분\n");
	scanf("%d", &b);	
	
	printf("도착 시각(c시 d분)을 입력하세요.\n");
	printf("c시\n");
	scanf("%d", &c);
	printf("d분\n");
	scanf("%d", &d);
	
	/* 소요 시간(Ctime) 계산 */
	Ctime = (60 * c + d) - (60 * a + b);
	
	/* 교통 상황 입력 */
	    /* 교통 상황(CGS) */ 
	printf("현재 교통상황이 어떤가요?(1은 혼잡, 2는 보통)\n");
	scanf("%lf", &CGS);
	
	    /* 혼잡도(CLV) */ 
	if(CGS < 1.5){
	printf("혼잡도를 구체적으로 입력해주세요(1 보통, 2 심각)\n");
	scanf("%lf", &CLV);
	if(CLV < 1.5){
	Ctime = Ctime * 0.7;}
	else if(CLV > 1.5){
	Ctime = Ctime * 0.5;}
    }
	
	    /* 점검 프로그램 */
    printf("Ctime: %lf\n",Ctime);
		 
	/* 거리(Dis) 입력 */
	printf("목적지까지의 거리(km)를 입력하세요.\n"); 
	scanf("%lf", &Dis);
	
	/* 필요 속력(NS) 계산 */
	NS = Dis / Ctime * 60;
	    /* 점검 프로그램 */
    printf("NS: %lf\n",NS);	
	
    /* 조건문 */
			if (NS>50){
			printf("시외버스, 택시, 자가용을 이용하세요.");
			}else if (NS>20){
			printf("시외버스, 택시, 자가용, 지하철을 이용하세요.");
			}else if (NS>15){
			printf("시외버스, 택시, 자가용, 지하철, 시내버스를 이용하세요.");
			}else if (NS>5){
				printf("시외버스, 택시, 자가용, 지하철, 시내버스, 자전거를 이용하세요.");
				}else if (NS>0){
					printf("시외버스, 택시, 자가용, 지하철, 시내버스, 자전거, 보행을 이용하세요.");
			}
				return 0; 
			
}
