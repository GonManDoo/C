#include <stdio.h>

int main(void)
{
	int a, b, c, d; // a�� b��, c�� d�� 
	double Ctime, Dis, NS; //�ҿ� �ð�, �Ÿ�, �ʿ� �ӷ� 
	double CGS, CLV; //���� ��Ȳ, ȥ�⵵ 
	
	/* ���� �ȳ��� */
	printf("���ݺ��� ������ �ȳ��� �����ϰڽ��ϴ�.\n");
	
	/* �ð� �Է� */
	printf("��� �ð�(a�� b��)�� �Է��ϼ���.\n");
	printf("24�÷� �ۼ����ּ���.\n");
	printf("a��\n");
	scanf("%d", &a);
	printf("b��\n");
	scanf("%d", &b);	
	
	printf("���� �ð�(c�� d��)�� �Է��ϼ���.\n");
	printf("c��\n");
	scanf("%d", &c);
	printf("d��\n");
	scanf("%d", &d);
	
	/* �ҿ� �ð�(Ctime) ��� */
	Ctime = (60 * c + d) - (60 * a + b);
	
	/* ���� ��Ȳ �Է� */
	    /* ���� ��Ȳ(CGS) */ 
	printf("���� �����Ȳ�� �����?(1�� ȥ��, 2�� ����)\n");
	scanf("%lf", &CGS);
	
	    /* ȥ�⵵(CLV) */ 
	if(CGS < 1.5){
	printf("ȥ�⵵�� ��ü������ �Է����ּ���(1 ����, 2 �ɰ�)\n");
	scanf("%lf", &CLV);
	if(CLV < 1.5){
	Ctime = Ctime * 0.7;}
	else if(CLV > 1.5){
	Ctime = Ctime * 0.5;}
    }
	
	    /* ���� ���α׷� */
    printf("Ctime: %lf\n",Ctime);
		 
	/* �Ÿ�(Dis) �Է� */
	printf("������������ �Ÿ�(km)�� �Է��ϼ���.\n"); 
	scanf("%lf", &Dis);
	
	/* �ʿ� �ӷ�(NS) ��� */
	NS = Dis / Ctime * 60;
	    /* ���� ���α׷� */
    printf("NS: %lf\n",NS);	
	
    /* ���ǹ� */
			if (NS>50){
			printf("�ÿܹ���, �ý�, �ڰ����� �̿��ϼ���.");
			}else if (NS>20){
			printf("�ÿܹ���, �ý�, �ڰ���, ����ö�� �̿��ϼ���.");
			}else if (NS>15){
			printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó������� �̿��ϼ���.");
			}else if (NS>5){
				printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó�����, �����Ÿ� �̿��ϼ���.");
				}else if (NS>0){
					printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó�����, ������, ������ �̿��ϼ���.");
			}
				return 0; 
			
}
