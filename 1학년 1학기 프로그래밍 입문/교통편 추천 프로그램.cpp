#include <stdio.h>

int main()
{
	double time, distance, speed, cong, conglv;
	/*교통상황*/
	printf("지금 교통상황은 어떤가요?\n 1:원할\n 2:혼잡\n");
	scanf("%lf", cong);
	/*교통상황 조건문*/
	if (cong=1){time=time;
	} else if (cong=2){printf("혼잡도는 어떤가요?\n 1:보통\n2:심각");
	    scanf("%lf", conglv);
	    /*혼잡도 조건문*/
		if (conglv=1){time*0.7;
		} else if (conglv=2){time* 0.5;
		} else {printf("잘못된 값을 입력하셨습니다.");}
    }else {printf("잘못된 값을 입력하셨습니다.");}
	/*시간 입력*/
	printf("이동에 사용할 수 있는 시간(분)을 입력해주세요.\n");
	scanf("%lf",&time); 
	/*거리 입력*/
    printf("목적지까지의 거리(km)를 입력해주세요.\n");
	scanf("%lf", &distance);  
	/*속력 계산*/
    speed = distance /time * 60;
    printf("당신이 필요로 하는 시간은 시속 %lf km 입니다.\n", speed);
    /*조건문*/
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
