#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int answer = 100;
	int guess =0;
	int tries = 0;
	int SPMP =0; 
	
	/*싱글플레이, 멀티플레이 고르기*/ 
	do                                     //모드 선 택 
	{
	    printf("1.싱글플레이\n");
	    printf("2.멀티플레이\n");
	    printf("하나를 선택하세요\n");
	    scanf ("%d",&SPMP);
    } while(SPMP<1 || SPMP > 2); 
	
	if(SPMP<1.5){                         //싱글 플레이를 골랐을  때
	    printf("선택된 모드: 싱글플레이\n");
	    printf("0부터 99까지의 숫자 중 자동으로 숫자를 만들고 있습니다.\n");
	    answer = rand()%100;
	}
	
	else{                                //멀티 플레이를 골랐을 때 
	    printf("선택된 모드: 멀티플레이\n");
	    printf("출제자는 0부터 99까지의 숫자 중 하나를 입력해주세요\n");
	    scanf("%d", &answer);
    }
	/*과제 내용*/ 
	do {
		printf("정답을 추측하여 보시오:\n");
		scanf("%d", &guess);
		tries++;
		if(guess > answer)
		    printf("제시한 점수가 높습니다.\n");
		if(guess < answer)
            printf("제시한 점수가 낮습니다.\n");	    
	} while (guess !=answer);
	    printf("축하합니다. 시도횟수=%d", tries);
    return 0;
}
