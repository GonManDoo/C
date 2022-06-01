#include <stdio.h>

/* 오목 만들기 */
/* 지휘 모듈은 함수만을 이용해서 움직임 */
/* 기존에 복잡한 식을 작성해서 만든 각각의 모듈을 함수로 선언해서 만들 것*/ 

//틱텍토때 ㅤㅆㅓㅅ던 모듈 재활용하기-사실 이것도 좌설 배열 모듈 재활용 
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

void Warrange();

const char* board[19][19]; //오목 말 두는 배열 //바둑판이 19줄 19줄 이니까 말 두는 배열도 19 x 19로 선언 
int a, b ; //오목 말 두는 배열 좌표 값 
int i ; //다목적 
int c, d; //계속 오류가 나서 전역변수로 선언함. 
int Wscore, Bscore; //arrange랑 check 함수들 정지 신호 
	
	/*지휘 모듈*/ 
int main(){
	board_draw();
	while(1){
		arrange();
	if(Bscore>50){
		break;
	}
	if(Wscore>50){
		break;
	}
}
}


void board_draw(){
    /*오목 말 두는 배열에 특수 문자 입력=바둑판 초기화*/
    for(a=0; a<19; a++){
	for(b=0; b<19; b++){
		board[a][b]="┼─";}} //여기에 ┼ 이거만 넣으면 됨. 
	
    /*상단 좌표 보조선*/ /*출력 형태: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//상단  좌표 보조선 (1~9)
		}
		else printf("  %d", i+1); //상단  좌표 보조선 (10~19)    	
	}
	printf("\n");
	
	/*첫번째 줄*/ /*출력 형태: ┌─┬─┬─┬─┬─┬─┐*/ 
    printf("   ┌");
    for(i=0; i<19;i++){
    printf("───┬");
    }
    printf("───┐\n");
    
    /*중간 줄*/ /*출력 형태: ├─┼─┼─┼─┼─┼─┤*/ 
    for(b=0; b<19; b++){
    	for(i=0; i<21; i++){ //세로 크기 추가 선(가로 좌표 보조선이 잘 안보여서 크기를 키움) 
    	printf("   │"); 
        }
        printf("\n");
    	if(b<9){	printf("0%d ├", b+1);//좌측 좌표 보조선 (1~9)
		}
		else printf("%d ├", b+1); //좌측 좌표 보조선 (10~19)
		printf("───");
	for(a=0; a<19; a++){
	printf("%s", board[a][b]); //오목 말 두는 배열이 될 것임. 
	printf("──");
    }
    if(b<9){printf("┤ 0%d\n", b+1); //우측 좌표 보조선(1~9) 
    }
    else printf("┤ %d\n", b+1); //우측 좌표 보조선 (10~19) 
    }
    
    for(i=0; i<21; i++){ //세로 크기 추가 선(가로 좌표 보조선이 잘 안보여서 크기를 키움) 
    printf("   │"); 
        }
        printf("\n");
    
    /*마지막 줄*/ /*출력 형태: └─┴─┴─┴─┴─┴─┘*/ 
    printf("   └");
    for(i=0; i<19;i++){
    printf("───┴");
    }
    printf("───┘\n");
    
    /*하단 좌표 보조선*/ /*출력 형태: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//상단  좌표 보조선 (1~9)
		}
		else printf("  %d", i+1); //상단  좌표 보조선 (10~19)    	
	}
	printf("\n");
}

void arrange(){
	
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
    
    
}

void board_draw_no_reset(){
	
    /*상단 좌표 보조선*/ /*출력 형태: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//상단  좌표 보조선 (1~9)
		}
		else printf("  %d", i+1); //상단  좌표 보조선 (10~19)    	
	}
	printf("\n");
	
	/*첫번째 줄*/ /*출력 형태: ┌─┬─┬─┬─┬─┬─┐*/ 
    printf("   ┌");
    for(i=0; i<19;i++){
    printf("───┬");
    }
    printf("───┐\n");
    
    /*중간 줄*/ /*출력 형태: ├─┼─┼─┼─┼─┼─┤*/ 
    for(b=0; b<19; b++){
    	for(i=0; i<21; i++){ //세로 크기 추가 선(가로 좌표 보조선이 잘 안보여서 크기를 키움) 
    	printf("   │"); 
        }
        printf("\n");
    	if(b<9){	printf("0%d ├", b+1);//좌측 좌표 보조선 (1~9)
		}
		else printf("%d ├", b+1); //좌측 좌표 보조선 (10~19)
		printf("───");
	for(a=0; a<19; a++){
	printf("%s", board[a][b]); //오목 말 두는 배열이 될 것임. 
	printf("──");
    }
    if(b<9){printf("┤ 0%d\n", b+1); //우측 좌표 보조선(1~9) 
    }
    else printf("┤ %d\n", b+1); //우측 좌표 보조선 (10~19) 
    }
    
    for(i=0; i<21; i++){ //세로 크기 추가 선(가로 좌표 보조선이 잘 안보여서 크기를 키움) 
    printf("   │"); 
        }
        printf("\n");
    
    /*마지막 줄*/ /*출력 형태: └─┴─┴─┴─┴─┴─┘*/ 
    printf("   └");
    for(i=0; i<19;i++){
    printf("───┴");
    }
    printf("───┘\n");
    
    /*하단 좌표 보조선*/ /*출력 형태: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//상단  좌표 보조선 (1~9)
		}
		else printf("  %d", i+1); //상단  좌표 보조선 (10~19)    	
	}
	printf("\n");
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
	
void Wcheck_heith(int x, int y){
	for(x=0; x<19; x++){
		for(y=0; y<14; y++){
            if(board[x][y]=="○"&&board[x][y+1]=="○"&&board[x][y+2]=="○"&&board[x][y+3]=="○"&&board[x][y+4]=="○"){
    	        printf("흰말이 승리하였습니다.\n");
    	        Wscore=100;
    	    }
    	}
    }
	}
	
void Bcheck_width(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<14; x++){
            if(board[x][y]=="●"&&board[x][y+1]=="●"&&board[x][y+2]=="●"&&board[x][y+3]=="●"&&board[x][y+4]=="●"){
    	        printf("흑말이 승리하였습니다.\n");
    	        Bscore=100;
    	    }
    	}
    }
	}
	
void Wcheck_width(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<14; x++){
            if(board[x][y]=="○"&&board[x][y+1]=="○"&&board[x][y+2]=="○"&&board[x][y+3]=="○"&&board[x][y+4]=="○"){
    	        printf("흰말이 승리하였습니다.\n");
    	        Wscore=100;
    	    }
    	}
    }
	}
	
void Bcheck_Rcross(int x, int y){
	for(x=4; x<15; x++){
		for(y=0; y<19; y++){
			if(board[x][y]=="●"&&board[x-1][y+1]=="●"&&board[x-2][y+2]=="●"&&board[x-3][y+3]=="●"&&board[x-4][y+4]=="●"){
			printf("흑말이 승리하였습니다.\n");
			Bscore=100;
		}
		}
	}
}

void Wcheck_Rcross(int x, int y){
	for(x=4; x<15; x++){
		for(y=0; y<19; y++){
			if(board[x][y]=="○"&&board[x-1][y+1]=="○"&&board[x-2][y+2]=="○"&&board[x-3][y+3]=="○"&&board[x-4][y+4]=="○"){

			printf("흰말이 승리하였습니다.\n");
			Wscore=100;
		}
		}
	}
}

void Bcheck_Lcross(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<15; x++){
			if(board[x][y]=="●"&&board[x+1][y+1]=="●"&&board[x+2][y+2]=="●"&&board[x+3][y+3]=="●"&&board[x+4][y+4]=="●"){
			
			printf("흑말이 승리하였습니다.\n");
			Bscore=100;
		}
		}
	}
}

void Wcheck_Lcross(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<15; x++){
			if(board[x][y]=="○"&&board[x+1][y+1]=="○"&&board[x+2][y+2]=="○"&&board[x+3][y+3]=="○"&&board[x+4][y+4]=="○"){
			printf("흰말이 승리하였습니다.\n");
			Wscore=100;
		}
		}
	}
}

void Warrange(){
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
	
	/*좌표 입력 받은 거 바탕으로 배열에 오목 말 넣기*/
	if(board[c][d]=="┼─"){
			board[c][d]="○";
			board_draw_no_reset();
    }
    else printf("다시 골라주세요.\n");     
    
    //승리 확인 조건 모듈
	Wcheck_width(0, 0);
    Wcheck_heith(0, 0);
    Wcheck_Lcross(0, 0);
    Wcheck_Rcross(0, 0); 
	
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
    
}
