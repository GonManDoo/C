int main(void){
	
	int a, b; //������ ��ǥ �� 
	char board[3][3];
	char user; //���� Ȯ��
    char n;
	
	/*�¸� ����*/
	//�밢�� 
    if(board[0][0]='O'&&board[1][1]='O'&&board[2][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break; 
	}
    if(board[2][0]='O'&&board[1][1]='O'&&board[0][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]='O'&&board[0][1]='O'&&board[0][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[1][0]='O'&&board[1][1]='O'&&board[2][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[2][0]='O'&&board[2][1]='O'&&board[2][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]='O'&&board[1][0]='O'&&board[2][0]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][1]='O'&&board[1][1]='O'&&board[2][1]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][2]='O'&&board[2][2]='O'&&board[2][2]='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
	
}
