#include<stdio.h>
int adtrp(void){
	int a, n;
	a=0;
	n=0;
	for(a=1; a<7; a++){
		n=n+3*a;
	}
	return n;
}

int main(void){
	printf("%d", adtrp());
	return 0;
}
