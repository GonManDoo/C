#include <stdio.h>

int main()
{
	double time, distance, speed, cong, conglv;
	/*�����Ȳ*/
	printf("���� �����Ȳ�� �����?\n 1:����\n 2:ȥ��\n");
	scanf("%lf", cong);
	/*�����Ȳ ���ǹ�*/
	if (cong=1){time=time;
	} else if (cong=2){printf("ȥ�⵵�� �����?\n 1:����\n2:�ɰ�");
	    scanf("%lf", conglv);
	    /*ȥ�⵵ ���ǹ�*/
		if (conglv=1){time*0.7;
		} else if (conglv=2){time* 0.5;
		} else {printf("�߸��� ���� �Է��ϼ̽��ϴ�.");}
    }else {printf("�߸��� ���� �Է��ϼ̽��ϴ�.");}
	/*�ð� �Է�*/
	printf("�̵��� ����� �� �ִ� �ð�(��)�� �Է����ּ���.\n");
	scanf("%lf",&time); 
	/*�Ÿ� �Է�*/
    printf("������������ �Ÿ�(km)�� �Է����ּ���.\n");
	scanf("%lf", &distance);  
	/*�ӷ� ���*/
    speed = distance /time * 60;
    printf("����� �ʿ�� �ϴ� �ð��� �ü� %lf km �Դϴ�.\n", speed);
    /*���ǹ�*/
	if (speed>50){
		printf("�ÿܹ���, �ý�, �ڰ����� �̿��ϼ���.");
		}else if (speed>20){
			printf("�ÿܹ���, �ý�, �ڰ���, ����ö�� �̿��ϼ���.");
			}else if (speed>15){
			    printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó������� �̿��ϼ���.");
			    }else if (speed>5){
				    printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó�����, �����Ÿ� �̿��ϼ���.");
				    }else if (speed>0){
					    printf("�ÿܹ���, �ý�, �ڰ���, ����ö, �ó�����, ������, ������ �̿��ϼ���.");
			            }
	return 0; 
}
