#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100000
#define SIZE 10

int main(void){
	int i, a; //i�� ���� �ʱ�ȭ�� a�� minimum��
	int minimum;
	int prices[SIZE];
	double random;
	
	/*���� �ʱ�ȭ*/
	for(i=0; i<10; i++){
	srand(time(NULL)*i);
	
	random = rand()*100%MAX;
	prices[i] = random;
	
	printf("price[%d]:%d\n", i, prices[i]);
}

return 0;
	
	
}
