#include <stdio.h>
#include <string.h>

/* ���� ����� */
/* ���� ����� �Լ����� �̿��ؼ� ������ */
/* ������ ������ ���� �ۼ��ؼ� ���� ������ ����� �Լ��� �����ؼ� ���� ��*/ 

//ƽ���䶧 ���� ��� ��Ȱ���ϱ�-��� �̰͵� �¼� �迭 ��� ��Ȱ�� 
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

const char* board[19][19]; //���� �� �δ� �迭 //�ٵ����� 19�� 19�� �̴ϱ� �� �δ� �迭�� 19 x 19�� ���� 
int a, b ; //���� �� �δ� �迭 ��ǥ �� 
int i ; //�ٸ��� 
int c, d; //��� ������ ���� ���������� ������. 
int Bscore;

int main(){
	Bcheck_heith(0, 0);
	printf("%d", Bscore);
}
	
void Bcheck_heith(int x, int y){
	for(x=0; x<19; x++){
		for(y=0; y<14; y++){
            if(board[x][y]=="��"&&board[x][y+1]=="��"&&board[x][y+2]=="��"&&board[x][y+3]=="��"&&board[x][y+4]=="��"){
    	        printf("�渻�� �¸��Ͽ����ϴ�.\n");
    	        Bscore=100;
    	    }
    	}
    }
	}
