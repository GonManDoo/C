#include<stdio.h>

int main(void){
	
	int a, b; //������ ��ǥ �� 
	char board[3][3];
	char user; //���� Ȯ��
	
	/*������ �ʱ�ȭ*/ 
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			board[a][b]='N';
		
	
	printf(" ����[%d][%d]=%c\n", a, b, board[a][b]); //Ȯ�� ���  
    }
    }
	
	/*������ ���*/
	printf("\n -���� ��Ȳ- \n\n");
	b=0;
	for(a=0; a<3; a++){
    printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
    
	/*a, b �� �Է¹ޱ�*/
	while(1){
	/*���� Ȯ��*/
	printf("�÷��̾��� �Է¹��ڸ� �Է����ּ���.\n");
	printf("(O�� X �߿���): ");
	
    fflush(stdin); //���� ����� ��� 
	
    scanf(" %c", &user);
	printf("%c", user); // �Է� ���� Ȯ�� ��� 
	
	a=0; //�ʱ�ȭ 
	b=0; 
	printf("�Է��� ���ϴ� ��ǥ�� �Է����ּ���.\n");
	while(1){
    printf("����:\n");
    scanf("%d", &a);
    if(a>3){
    	printf("1�� 3���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	while(1){
    printf("����:\n");
    scanf("%d", &b); 
    if(b>3){
    	printf("1�� 3���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	printf("a: %d b: %d\n", a, b); // �Է� ���� Ȯ�� ���
	
	a=a-1;
	b=b-1;
	
	printf("a: %d b: %d\n", a, b); // �Է� ���� Ȯ�� ���
	
	/*����ִ��� Ȯ��*/
	if(board[a][b]=='N'){
		if(user=='O'||user=='o'){
			board[a][b]='O' ;
			/*������ ���*/
			printf("\n -���� ��Ȳ- \n\n");
	        b=0;
	        for(a=0; a<3; a++){
            printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
        }
		else{board[a][b]='X';
			/*������ ���*/
			printf("\n -���� ��Ȳ- \n\n");
	        b=0;
	        for(a=0; a<3; a++){
            printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);} 
        }
    }
    else printf("�ٽ� ����ּ���.\n");
    
    /*O �¸� ����*/
	//�밢�� 
    if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break; 
	}
    if(board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[1][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][2]=='O'&&board[2][2]=='O'&&board[2][2]=='O'){
    	printf("O�� �¸��߽��ϴ�.");
		break;
	}
	
	/*X �¸� ����*/
	//�밢��
    if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break; 
	}
    if(board[2][0]=='X'&&board[1][1]=='X'&&board[0][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    if(board[1][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    //����
    if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
    if(board[0][2]=='X'&&board[2][2]=='X'&&board[2][2]=='X'){
    	printf("X�� �¸��߽��ϴ�.");
		break;
	}
	}
    return 0;
    
}
	
	
