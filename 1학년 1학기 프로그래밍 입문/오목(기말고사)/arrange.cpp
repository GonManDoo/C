#include <stdio.h>

/* ���� ����� */
/* ���� ����� �Լ����� �̿��ؼ� ������ */
/* ������ ������ ���� �ۼ��ؼ� ���� ������ ����� �Լ��� �����ؼ� ���� ��*/ 

//�ٵ��� �׸��� �Լ�
//ƽ���䶧 ���� ��� ��Ȱ���ϱ�-��� �̰͵� �¼� �迭 ��� ��Ȱ�� 
int main(){
	const char* board[19][19]; //���� �� �δ� �迭 //�ٵ����� 19�� 19�� �̴ϱ� �� �δ� �迭�� 19 x 19�� ���� 
    int a, b ; //���� �� �δ� �迭 ��ǥ �� 
    int i ; //�ٸ��� 
    int c, d; //��� ������ ���� ���������� ������. 
    int Wscore, Bscore; //arrange�� check �Լ��� ���� ��ȣ 	
    //[�渻] 
    /*��ǥ �Է� �ޱ�*/
	printf("�渻�� �����Դϴ�.\n");
	printf("���Ͻô� ��ǥ(1~19)�� �Է����ּ���.\n");
	
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
	
	/*�迭�� ����ִ��� Ȯ���ϰ� �ֱ�*/ 
	if(board[c][d]=="��"||board[c][d]=="��"){
		printf("�ٽ� ����ּ���.\n");
		arrange();
    }
    else {board[c][d]="��";
			board_draw_no_reset();
			}
    
    //�¸� Ȯ�� ���� ���
	Bcheck_width(0, 0);
    Bcheck_heith(0, 0);
    Bcheck_Lcross(0, 0);
    Bcheck_Rcross(0, 0); 
    
    //[��]
    /*��ǥ �Է� �ޱ�*/
	printf("�򸻡� �����Դϴ�.\n");
	printf("���Ͻô� ��ǥ(1~19)�� �Է����ּ���.\n");
	
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
	
	/*�迭�� ����ִ��� Ȯ���ϰ� �ֱ�*/ 
	if(board[c][d]=="��"||board[c][d]=="��"){
		printf("�ٽ� ����ּ���.\n");
		Warrange();
    }
    else {board[c][d]="��";
			board_draw_no_reset();
			}   
    
    //�¸� Ȯ�� ���� ���
	Wcheck_width(0, 0);
    Wcheck_heith(0, 0);
    Wcheck_Lcross(0, 0);
    Wcheck_Rcross(0, 0); 
    
    
