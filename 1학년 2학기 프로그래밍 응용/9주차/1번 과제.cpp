#include<stdio.h>
struct stype{
    int snum; /* �й� */
    int score[8]; /* ���� ���� */
	};

int MASCR(struct stype stdnt[], int stnum){
	int total;
	int a, i;
	
	for(i=0; i<30; i++){
		if(stdnt[i].snum == stnum){
			total=stdnt[i].score[0];
			for(a=0; a<8; a++){
				if(stdnt[i].score[a]>total){
					total=stdnt[i].score[a];
					return total;
				}
			}
		}
		
	}
}


int BESTNT(struct stype stdnt[]){
	int top;
	int a, i;	
	int aver[30];
	int code; 
	
	//�� �л� ������ ��հ� 
	for(i=0; i<30; i++){
		for(a=0; a<8; a++){
			aver[a]=aver[a]+ stdnt[i].score[a]; //�� ���� ������ ��� ���ϰ� 
		}
		aver[a]=aver[a]/8; //������ ��հ��� ���� 
	}
	
	//���ؼ� ���� ���� �� ã��
	top=aver[0];
	for(i=0; i<30; i++){
		if(aver[i]>top){
			top=aver[i]; //���� ���� ���� top�� ���� 
			code=i; //���� ���� ������ ������ code�� ���� 
		}
	} 
	
	return stdnt[code].snum; //���� ���� ���� ���� �� �����ص� code���� �̿��Ͽ� �й� ��ȯ 
	
}


int main(void){
    int number;   
    struct stype student[30];
    printf("�й��� �Է��Ͻÿ�.\n");
    scanf("%d", number);
    
    MASCR(struct stype student[30], number);
    
    
       
       
   }
