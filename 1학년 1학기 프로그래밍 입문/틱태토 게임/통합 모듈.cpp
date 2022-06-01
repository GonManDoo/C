#include<stdio.h>

int main(void){
	
	int a, b; //보드판 좌표 값 
	char board[3][3];
	char user; //본인 확인
	
	/*보드판 초기화*/ 
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			board[a][b]='N';
		
	
	printf(" 보드[%d][%d]=%c\n", a, b, board[a][b]); //확인 모듈  
    }
    }
	
	/*보드판 출력*/
	printf("\n -진행 상황- \n\n");
	b=0;
	for(a=0; a<3; a++){
    printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
    
	/*a, b 축 입력받기*/
	while(1){
	/*본인 확인*/
	printf("플레이어의 입력문자를 입력해주세요.\n");
	printf("(O랑 X 중에서): ");
	
    fflush(stdin); //버퍼 지우는 모듈 
	
    scanf(" %c", &user);
	printf("%c", user); // 입력 문자 확인 모듈 
	
	a=0; //초기화 
	b=0; 
	printf("입력을 원하는 좌표를 입력해주세요.\n");
	while(1){
    printf("가로:\n");
    scanf("%d", &a);
    if(a>3){
    	printf("1과 3사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	while(1){
    printf("세로:\n");
    scanf("%d", &b); 
    if(b>3){
    	printf("1과 3사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	printf("a: %d b: %d\n", a, b); // 입력 문자 확인 모듈
	
	a=a-1;
	b=b-1;
	
	printf("a: %d b: %d\n", a, b); // 입력 문자 확인 모듈
	
	/*비어있는지 확인*/
	if(board[a][b]=='N'){
		if(user=='O'||user=='o'){
			board[a][b]='O' ;
			/*보드판 출력*/
			printf("\n -진행 상황- \n\n");
	        b=0;
	        for(a=0; a<3; a++){
            printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
        }
		else{board[a][b]='X';
			/*보드판 출력*/
			printf("\n -진행 상황- \n\n");
	        b=0;
	        for(a=0; a<3; a++){
            printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);} 
        }
    }
    else printf("다시 골라주세요.\n");
    
    /*O 승리 조건*/
	//대각선 
    if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
    	printf("O가 승리했습니다.");
		break; 
	}
    if(board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    //가로
    if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[1][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    //세로
    if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[0][2]=='O'&&board[2][2]=='O'&&board[2][2]=='O'){
    	printf("O가 승리했습니다.");
		break;
	}
	
	/*X 승리 조건*/
	//대각선
    if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
    	printf("X가 승리했습니다.");
		break; 
	}
    if(board[2][0]=='X'&&board[1][1]=='X'&&board[0][2]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    //가로
    if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    if(board[1][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    //세로
    if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
    if(board[0][2]=='X'&&board[2][2]=='X'&&board[2][2]=='X'){
    	printf("X가 승리했습니다.");
		break;
	}
	}
    return 0;
    
}
	
	
