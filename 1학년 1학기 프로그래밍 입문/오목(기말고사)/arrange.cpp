#include <stdio.h>

/* 오목 만들기 */
/* 지휘 모듈은 함수만을 이용해서 움직임 */
/* 기존에 복잡한 식을 작성해서 만든 각각의 모듈을 함수로 선언해서 만들 것*/ 

//바둑판 그리기 함수
//틱텍토때 썻던 모듈 재활용하기-사실 이것도 좌설 배열 모듈 재활용 
int main(){
	const char* board[19][19]; //오목 말 두는 배열 //바둑판이 19줄 19줄 이니까 말 두는 배열도 19 x 19로 선언 
    int a, b ; //오목 말 두는 배열 좌표 값 
    int i ; //다목적 
    int c, d; //계속 오류가 나서 전역변수로 선언함. 
    int Wscore, Bscore; //arrange랑 check 함수들 정지 신호 	
    //[흑말] 
    /*좌표 입력 받기*/
	printf("흑말● 차례입니다.\n");
	printf("원하시는 좌표(1~19)를 입력해주세요.\n");
	
	while(1){
    printf("가로:\n");
    scanf("%d", &c);
    if(c>19||c<1){
    	printf("1과 19사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	while(1){
    printf("세로:\n");
    scanf("%d", &d); 
    if(d>19||d<1){
    	printf("1과 19사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	c=c-1;
	d=d-1;
	
	/*배열이 비어있는지 확인하고 넣기*/ 
	if(board[c][d]=="●"||board[c][d]=="○"){
		printf("다시 골라주세요.\n");
		arrange();
    }
    else {board[c][d]="●";
			board_draw_no_reset();
			}
    
    //승리 확인 조건 모듈
	Bcheck_width(0, 0);
    Bcheck_heith(0, 0);
    Bcheck_Lcross(0, 0);
    Bcheck_Rcross(0, 0); 
    
    //[흰말]
    /*좌표 입력 받기*/
	printf("흰말○ 차례입니다.\n");
	printf("원하시는 좌표(1~19)를 입력해주세요.\n");
	
	while(1){
    printf("가로:\n");
    scanf("%d", &c);
    if(c>19||c<1){
    	printf("1과 19사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	while(1){
    printf("세로:\n");
    scanf("%d", &d); 
    if(d>19||d<1){
    	printf("1과 19사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	c=c-1;
	d=d-1;
	
	/*배열이 비어있는지 확인하고 넣기*/ 
	if(board[c][d]=="●"||board[c][d]=="○"){
		printf("다시 골라주세요.\n");
		Warrange();
    }
    else {board[c][d]="○";
			board_draw_no_reset();
			}   
    
    //승리 확인 조건 모듈
	Wcheck_width(0, 0);
    Wcheck_heith(0, 0);
    Wcheck_Lcross(0, 0);
    Wcheck_Rcross(0, 0); 
    
    
