#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100000

int main(void){
	int i, a; //i�� ���� �ʱ�ȭ�� a�� minimum��
	int minimum=100000; //minimum�� �ִ밪���� �����Ͽ� �ʱ�ȭ
	int prices[10];
	double random;
	
	/*���� �ʱ�ȭ*/
	for(i=0; i<10; i++){
	srand(time(NULL)*i);
	
	random = rand()*1000%MAX;
	prices[i] = random;
	
	printf("���θ�[%d]:%d\n", i+1, prices[i]);
}
	/*�ּҰ� ã��*/
	for(a=0; a<10; a++){
		if(prices[a]<minimum){
			minimum=prices[a];
		}
	}
    
	printf("�������� %d �Դϴ�.\n",minimum);
	
return 0;
}

