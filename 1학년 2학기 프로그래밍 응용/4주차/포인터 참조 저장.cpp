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
	int c;//�� 
	int d;//������ 
	
	if(*x>*y){
	printf("x�� �� ŭ\n"); 
		c= *x / *y;//�� 
		d= *x % *y;//������ 
	}
	else{
	printf("y�� �� ũ�ų� ����\n");
		c= *y / *x;//�� 
		d= *y % *x;//������ 
	}
	
	printf("�� %d, ������ %d\n", c, d); 
	
	*x=c;//x�� ������ �� ���� 
	*y=d;//y�� ������ ������ ���� 
}
