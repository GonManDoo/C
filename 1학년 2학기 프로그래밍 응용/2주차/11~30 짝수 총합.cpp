#include<stdio.h>

int adevn(void){
	int a, n, c;
	a=0;
	n=0;
	c=0;
	for(a=11; a<31; a++){
		c=a%2;
		if(c==0){
			printf("짝수 %d을/를 n에 더합니다.\n\n", a);
			n=n+a;
		}
		else{
			printf("%d는 홀수 입니다.\n\n",a);
		}
	}
	return n;
}

int main(void){
	printf("11부터 30까지의 숫자 중 짝수의 총합: %d\n", adevn());
	return 0;
}
