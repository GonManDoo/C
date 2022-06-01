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
    
    return 0;
}
