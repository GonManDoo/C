#include <stdio.h>

/* ���� ����� */
/* ���� ����� �Լ����� �̿��ؼ� ������ */
/* ������ ������ ���� �ۼ��ؼ� ���� ������ ����� �Լ��� �����ؼ� ���� ��*/ 

//ƽ���䶧 �Ԥ��ä��� ��� ��Ȱ���ϱ�-��� �̰͵� �¼� �迭 ��� ��Ȱ�� 
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

void Warrange();

const char* board[19][19]; //���� �� �δ� �迭 //�ٵ����� 19�� 19�� �̴ϱ� �� �δ� �迭�� 19 x 19�� ���� 
int a, b ; //���� �� �δ� �迭 ��ǥ �� 
int i ; //�ٸ��� 
int c, d; //��� ������ ���� ���������� ������. 
int Wscore, Bscore; //arrange�� check �Լ��� ���� ��ȣ 
	
	/*���� ���*/ 
int main(){
	board_draw();
	while(1){
		arrange();
	if(Bscore>50){
		break;
	}
	if(Wscore>50){
		break;
	}
}
}


void board_draw(){
    /*���� �� �δ� �迭�� Ư�� ���� �Է�=�ٵ��� �ʱ�ȭ*/
    for(a=0; a<19; a++){
	for(b=0; b<19; b++){
		board[a][b]="����";}} //���⿡ �� �̰Ÿ� ������ ��. 
	
    /*��� ��ǥ ������*/ /*��� ����: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//���  ��ǥ ������ (1~9)
		}
		else printf("  %d", i+1); //���  ��ǥ ������ (10~19)    	
	}
	printf("\n");
	
	/*ù��° ��*/ /*��� ����: ��������������������������*/ 
    printf("   ��");
    for(i=0; i<19;i++){
    printf("��������");
    }
    printf("��������\n");
    
    /*�߰� ��*/ /*��� ����: ��������������������������*/ 
    for(b=0; b<19; b++){
    	for(i=0; i<21; i++){ //���� ũ�� �߰� ��(���� ��ǥ �������� �� �Ⱥ����� ũ�⸦ Ű��) 
    	printf("   ��"); 
        }
        printf("\n");
    	if(b<9){	printf("0%d ��", b+1);//���� ��ǥ ������ (1~9)
		}
		else printf("%d ��", b+1); //���� ��ǥ ������ (10~19)
		printf("������");
	for(a=0; a<19; a++){
	printf("%s", board[a][b]); //���� �� �δ� �迭�� �� ����. 
	printf("����");
    }
    if(b<9){printf("�� 0%d\n", b+1); //���� ��ǥ ������(1~9) 
    }
    else printf("�� %d\n", b+1); //���� ��ǥ ������ (10~19) 
    }
    
    for(i=0; i<21; i++){ //���� ũ�� �߰� ��(���� ��ǥ �������� �� �Ⱥ����� ũ�⸦ Ű��) 
    printf("   ��"); 
        }
        printf("\n");
    
    /*������ ��*/ /*��� ����: ��������������������������*/ 
    printf("   ��");
    for(i=0; i<19;i++){
    printf("��������");
    }
    printf("��������\n");
    
    /*�ϴ� ��ǥ ������*/ /*��� ����: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//���  ��ǥ ������ (1~9)
		}
		else printf("  %d", i+1); //���  ��ǥ ������ (10~19)    	
	}
	printf("\n");
}

void arrange(){
	
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
    
    
}

void board_draw_no_reset(){
	
    /*��� ��ǥ ������*/ /*��� ����: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//���  ��ǥ ������ (1~9)
		}
		else printf("  %d", i+1); //���  ��ǥ ������ (10~19)    	
	}
	printf("\n");
	
	/*ù��° ��*/ /*��� ����: ��������������������������*/ 
    printf("   ��");
    for(i=0; i<19;i++){
    printf("��������");
    }
    printf("��������\n");
    
    /*�߰� ��*/ /*��� ����: ��������������������������*/ 
    for(b=0; b<19; b++){
    	for(i=0; i<21; i++){ //���� ũ�� �߰� ��(���� ��ǥ �������� �� �Ⱥ����� ũ�⸦ Ű��) 
    	printf("   ��"); 
        }
        printf("\n");
    	if(b<9){	printf("0%d ��", b+1);//���� ��ǥ ������ (1~9)
		}
		else printf("%d ��", b+1); //���� ��ǥ ������ (10~19)
		printf("������");
	for(a=0; a<19; a++){
	printf("%s", board[a][b]); //���� �� �δ� �迭�� �� ����. 
	printf("����");
    }
    if(b<9){printf("�� 0%d\n", b+1); //���� ��ǥ ������(1~9) 
    }
    else printf("�� %d\n", b+1); //���� ��ǥ ������ (10~19) 
    }
    
    for(i=0; i<21; i++){ //���� ũ�� �߰� ��(���� ��ǥ �������� �� �Ⱥ����� ũ�⸦ Ű��) 
    printf("   ��"); 
        }
        printf("\n");
    
    /*������ ��*/ /*��� ����: ��������������������������*/ 
    printf("   ��");
    for(i=0; i<19;i++){
    printf("��������");
    }
    printf("��������\n");
    
    /*�ϴ� ��ǥ ������*/ /*��� ����: 01 02 03 .. 18 19*/ 
	printf("     ");
    for(i=0; i<19; i++){
    	if(i<9){
		    printf("  0%d", i+1);//���  ��ǥ ������ (1~9)
		}
		else printf("  %d", i+1); //���  ��ǥ ������ (10~19)    	
	}
	printf("\n");
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
	
void Wcheck_heith(int x, int y){
	for(x=0; x<19; x++){
		for(y=0; y<14; y++){
            if(board[x][y]=="��"&&board[x][y+1]=="��"&&board[x][y+2]=="��"&&board[x][y+3]=="��"&&board[x][y+4]=="��"){
    	        printf("���� �¸��Ͽ����ϴ�.\n");
    	        Wscore=100;
    	    }
    	}
    }
	}
	
void Bcheck_width(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<14; x++){
            if(board[x][y]=="��"&&board[x][y+1]=="��"&&board[x][y+2]=="��"&&board[x][y+3]=="��"&&board[x][y+4]=="��"){
    	        printf("�渻�� �¸��Ͽ����ϴ�.\n");
    	        Bscore=100;
    	    }
    	}
    }
	}
	
void Wcheck_width(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<14; x++){
            if(board[x][y]=="��"&&board[x][y+1]=="��"&&board[x][y+2]=="��"&&board[x][y+3]=="��"&&board[x][y+4]=="��"){
    	        printf("���� �¸��Ͽ����ϴ�.\n");
    	        Wscore=100;
    	    }
    	}
    }
	}
	
void Bcheck_Rcross(int x, int y){
	for(x=4; x<15; x++){
		for(y=0; y<19; y++){
			if(board[x][y]=="��"&&board[x-1][y+1]=="��"&&board[x-2][y+2]=="��"&&board[x-3][y+3]=="��"&&board[x-4][y+4]=="��"){
			printf("�渻�� �¸��Ͽ����ϴ�.\n");
			Bscore=100;
		}
		}
	}
}

void Wcheck_Rcross(int x, int y){
	for(x=4; x<15; x++){
		for(y=0; y<19; y++){
			if(board[x][y]=="��"&&board[x-1][y+1]=="��"&&board[x-2][y+2]=="��"&&board[x-3][y+3]=="��"&&board[x-4][y+4]=="��"){

			printf("���� �¸��Ͽ����ϴ�.\n");
			Wscore=100;
		}
		}
	}
}

void Bcheck_Lcross(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<15; x++){
			if(board[x][y]=="��"&&board[x+1][y+1]=="��"&&board[x+2][y+2]=="��"&&board[x+3][y+3]=="��"&&board[x+4][y+4]=="��"){
			
			printf("�渻�� �¸��Ͽ����ϴ�.\n");
			Bscore=100;
		}
		}
	}
}

void Wcheck_Lcross(int x, int y){
	for(y=0; y<19; y++){
		for(x=0; x<15; x++){
			if(board[x][y]=="��"&&board[x+1][y+1]=="��"&&board[x+2][y+2]=="��"&&board[x+3][y+3]=="��"&&board[x+4][y+4]=="��"){
			printf("���� �¸��Ͽ����ϴ�.\n");
			Wscore=100;
		}
		}
	}
}

void Warrange(){
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
	
	/*��ǥ �Է� ���� �� �������� �迭�� ���� �� �ֱ�*/
	if(board[c][d]=="����"){
			board[c][d]="��";
			board_draw_no_reset();
    }
    else printf("�ٽ� ����ּ���.\n");     
    
    //�¸� Ȯ�� ���� ���
	Wcheck_width(0, 0);
    Wcheck_heith(0, 0);
    Wcheck_Lcross(0, 0);
    Wcheck_Rcross(0, 0); 
	
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
    
}
