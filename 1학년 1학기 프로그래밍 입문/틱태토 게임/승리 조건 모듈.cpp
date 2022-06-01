int main(void){
	
	int a, b; //보드판 좌표 값 
	char board[3][3];
	char user; //본인 확인
    char n;
	
	/*승리 조건*/
	//대각선 
    if(board[0][0]='O'&&board[1][1]='O'&&board[2][2]='O'){
    	printf("O가 승리했습니다.");
		break; 
	}
    if(board[2][0]='O'&&board[1][1]='O'&&board[0][2]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    //가로
    if(board[0][0]='O'&&board[0][1]='O'&&board[0][2]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[1][0]='O'&&board[1][1]='O'&&board[2][2]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[2][0]='O'&&board[2][1]='O'&&board[2][2]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    //세로
    if(board[0][0]='O'&&board[1][0]='O'&&board[2][0]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[0][1]='O'&&board[1][1]='O'&&board[2][1]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
    if(board[0][2]='O'&&board[2][2]='O'&&board[2][2]='O'){
    	printf("O가 승리했습니다.");
		break;
	}
	
}
