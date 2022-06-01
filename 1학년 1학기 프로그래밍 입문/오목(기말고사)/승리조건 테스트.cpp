#include <stdio.h>
#include <string.h>

/* 오목 만들기 */
/* 지휘 모듈은 함수만을 이용해서 움직임 */
/* 기존에 복잡한 식을 작성해서 만든 각각의 모듈을 함수로 선언해서 만들 것*/ 

//틱텍토때 썻던 모듈 재활용하기-사실 이것도 좌설 배열 모듈 재활용 
void board_draw();
void arrange();
void board_draw_no_reset();
void Bcheck_width(int x, int y);
void Bcheck_heith(int x, int y);
void Bcheck_Lcross(int x, int y);
void Bcheck_Rcross(int x, int y);
void Wcheck_width(int x, int y);
void Wcheck_heith(int x, int y);
void Wcheck_Lcross(int x, int y);
void Wcheck_Rcross(int x, int y);

const char* board[19][19]; //오목 말 두는 배열 //바둑판이 19줄 19줄 이니까 말 두는 배열도 19 x 19로 선언 
int a, b ; //오목 말 두는 배열 좌표 값 
int i ; //다목적 
int c, d; //계속 오류가 나서 전역변수로 선언함. 
int Bscore;

int main(){
	Bcheck_heith(0, 0);
	printf("%d", Bscore);
}
	
void Bcheck_heith(int x, int y){
	for(x=0; x<19; x++){
		for(y=0; y<14; y++){
            if(board[x][y]=="●"&&board[x][y+1]=="●"&&board[x][y+2]=="●"&&board[x][y+3]=="●"&&board[x][y+4]=="●"){
    	        printf("흑말이 승리하였습니다.\n");
    	        Bscore=100;
    	    }
    	}
    }
	}
