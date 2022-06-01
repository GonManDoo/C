#include<stdio.h>

int main(void){
	
	int a, b; //보드판 좌표 값 
	char board[3][3];
	
	/*보드판 초기화*/ 
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			board[a][b]='N';
		
	
	printf(" 보드[%d][%d]=%c\n", a, b, board[a][b]); //확인 모 듈  
    }
    }
    
	/*보드판 출력*/
	printf("\n -진행 상황- \n\n");
	b=0;
	for(a=0; a<3; a++){
    printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
 
    return 0;   
}
