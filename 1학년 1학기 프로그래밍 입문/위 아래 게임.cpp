#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int answer = 100;
	int guess =0;
	int tries = 0;
	int SPMP =0; 
	
	/*�̱��÷���, ��Ƽ�÷��� ����*/ 
	do                                     //��� �� �� 
	{
	    printf("1.�̱��÷���\n");
	    printf("2.��Ƽ�÷���\n");
	    printf("�ϳ��� �����ϼ���\n");
	    scanf ("%d",&SPMP);
    } while(SPMP<1 || SPMP > 2); 
	
	if(SPMP<1.5){                         //�̱� �÷��̸� �����  ��
	    printf("���õ� ���: �̱��÷���\n");
	    printf("0���� 99������ ���� �� �ڵ����� ���ڸ� ����� �ֽ��ϴ�.\n");
	    answer = rand()%100;
	}
	
	else{                                //��Ƽ �÷��̸� ����� �� 
	    printf("���õ� ���: ��Ƽ�÷���\n");
	    printf("�����ڴ� 0���� 99������ ���� �� �ϳ��� �Է����ּ���\n");
	    scanf("%d", &answer);
    }
	/*���� ����*/ 
	do {
		printf("������ �����Ͽ� ���ÿ�:\n");
		scanf("%d", &guess);
		tries++;
		if(guess > answer)
		    printf("������ ������ �����ϴ�.\n");
		if(guess < answer)
            printf("������ ������ �����ϴ�.\n");	    
	} while (guess !=answer);
	    printf("�����մϴ�. �õ�Ƚ��=%d", tries);
    return 0;
}
