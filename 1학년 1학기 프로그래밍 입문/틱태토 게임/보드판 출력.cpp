#include<stdio.h>

int main(void){
	
	int a, b; //������ ��ǥ �� 
	char board[3][3];
	
	/*������ �ʱ�ȭ*/ 
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			board[a][b]='N';
		
	
	printf(" ����[%d][%d]=%c\n", a, b, board[a][b]); //Ȯ�� �� ��  
    }
    }
    
	/*������ ���*/
	printf("\n -���� ��Ȳ- \n\n");
	b=0;
	for(a=0; a<3; a++){
    printf("    %c %c %c \n",board[a][b], board[a][b+1], board[a][b+2]);}
 
    return 0;   
}
