#include<stdio.h>

void sevn(int);

int main(void){
	int ipnum;
	ipnum=0;
	
	while(1){
		printf("7�� ����� �ƴ� ������ �Է��Ͻÿ�.\n");
		scanf("%d",&ipnum);
		if(ipnum<0){
			printf("���� ������ �Է��Ͻ� �� �����ϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if(ipnum%7==0){
			printf("7�� ����� �Է��Ͻ� �� �����ϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if(ipnum>=0 && ipnum%1==0){
			printf("���� �Է� Ȯ�� �Ϸ�\n");
			break;
		}
	}
	
	sevn(ipnum);
	
	return 0;
}

void sevn(int n){
	int cres=0;
	int decres=0;
	int i;
	int crtemp=0;
	int detemp=0;
	
	//���� �� ã��
	for(i=1; i*7<n; i++){
		cres=i*7;
	}
	decres=cres+7;
	
	crtemp=n-cres;
	
	detemp=decres-n;
	
	if(crtemp>detemp){
		printf("�Է��� ������ ���� ����� 7�� ����� %d�Դϴ�.\n", cres);
	}
	else{
		printf("�Է��� ������ ���� ����� 7�� ����� %d�Դϴ�.\n", decres);
	}
}
