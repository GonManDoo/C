#include<stdio.h>

void div_sub(int *, int*);

int main(){
	
	int a=2020;
	int b=1005;
	printf("a: %d, b: %d\n", a, b); 
	
	div_sub(&a, &b);
	
	printf("a: %d, b: %d\n", a, b); 
	
}

void div_sub(int *x, int *y){
	int c;//몫 
	int d;//나머지 
	
	if(*x>*y){
	printf("x가 더 큼\n"); 
		c= *x / *y;//몫 
		d= *x % *y;//나머지 
	}
	else{
	printf("y가 더 크거나 같음\n");
		c= *y / *x;//몫 
		d= *y % *x;//나머지 
	}
	
	printf("몫 %d, 나머지 %d\n", c, d); 
	
	*x=c;//x의 참조에 몫 저장 
	*y=d;//y의 참조에 나머지 저장 
}
