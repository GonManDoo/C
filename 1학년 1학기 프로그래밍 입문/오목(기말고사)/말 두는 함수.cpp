#include <stdio.h>
#include <string.h>

/* ���� ����� */
/* ���� ����� �Լ����� �̿��ؼ� ������ */
/* ������ ������ ���� �ۼ��ؼ� ���� ������ ����� �Լ��� �����ؼ� ���� ��*/ 

/*void arrange*/
void board_draw_no_reset(); 

int main(){
	const char* board[19][19]; //���� �� �δ� �迭 //�ٵ����� 19�� 19�� �̴ϱ� �� �δ� �迭�� 19 x 19�� ���� 
    int a, b ; //���� �� �δ� �迭 ��ǥ �� 
    int i ; //�ٸ��� 
    int c, d;
    
    //[�渻] 
    /*��ǥ �Է� �ޱ�*/
	printf("�渻�� �����Դϴ�.\n");
	printf("���Ͻô� ��ǥ�� �Է����ּ���.\n");
	
	while(1){
    printf("����:\n");
    scanf("%d", &c);
    if(c>19||c<1){
    	printf("1�� 19���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	while(1){
    printf("����:\n");
    scanf("%d", &d); 
    if(d>19||d<1){
    	printf("1�� 19���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	c=c-1;
	d=d-1;
	
	/*��ǥ �Է� ���� �� �������� �迭�� ���� �� �ֱ�*/
	if(board[c][d]=="����"){
			board[c][d]="��";
			board_draw_no_reset();
    }
    else printf("�ٽ� ����ּ���.\n"); 
    
    //[��]
    /*��ǥ �Է� �ޱ�*/
	printf("�򸻡� �����Դϴ�.\n");
	printf("���Ͻô� ��ǥ�� �Է����ּ���.\n");
	
	while(1){
    printf("����:\n");
    scanf("%d", &c);
    if(c>19||c<1){
    	printf("1�� 19���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	while(1){
    printf("����:\n");
    scanf("%d", &d); 
    if(d>19||d<1){
    	printf("1�� 19���̿��� �ٽ� �Է����ּ���.\n");
	}
	else break;}
	
	c=c-1;
	d=d-1;
	
	/*��ǥ �Է� ���� �� �������� �迭�� ���� �� �ֱ�*/
	if(board[c][d]=="����"){
			board[c][d]="��";
			board_draw_no_reset();
    }
    else printf("�ٽ� ����ּ���.\n");     

}
