#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100000

int main(void){
	int i, a; //i는 난수 초기화에 a는 minimum에
	int minimum=100000; //minimum을 최대값으로 지정하여 초기화
	int prices[10];
	double random;
	
	/*난수 초기화*/
	for(i=0; i<10; i++){
	srand(time(NULL)*i);
	
	random = rand()*1000%MAX;
	prices[i] = random;
	
	printf("쇼핑몰[%d]:%d\n", i+1, prices[i]);
}
	/*최소값 찾기*/
	for(a=0; a<10; a++){
		if(prices[a]<minimum){
			minimum=prices[a];
		}
	}
    
	printf("최저가는 %d 입니다.\n",minimum);
	
return 0;
}

