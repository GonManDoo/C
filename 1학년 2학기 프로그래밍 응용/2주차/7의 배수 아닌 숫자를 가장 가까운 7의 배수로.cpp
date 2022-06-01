#include<stdio.h>

void sevn(int);

int main(void){
	int ipnum;
	ipnum=0;
	
	while(1){
		printf("7의 배수가 아닌 정수를 입력하시오.\n");
		scanf("%d",&ipnum);
		if(ipnum<0){
			printf("음의 정수는 입력하실 수 없습니다.\n");
			printf("다시 입력해주세요.\n\n");
		}
		else if(ipnum%7==0){
			printf("7의 배수는 입력하실 수 없습니다.\n");
			printf("다시 입력해주세요.\n\n");
		}
		else if(ipnum>=0 && ipnum%1==0){
			printf("정상 입력 확인 완료\n");
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
	
	//작은 수 찾기
	for(i=1; i*7<n; i++){
		cres=i*7;
	}
	decres=cres+7;
	
	crtemp=n-cres;
	
	detemp=decres-n;
	
	if(crtemp>detemp){
		printf("입력한 정수와 가장 가까운 7의 배수는 %d입니다.\n", cres);
	}
	else{
		printf("입력한 정수와 가장 가까운 7의 배수는 %d입니다.\n", decres);
	}
}
