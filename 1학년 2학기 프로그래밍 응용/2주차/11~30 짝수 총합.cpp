#include<stdio.h>

int adevn(void){
	int a, n, c;
	a=0;
	n=0;
	c=0;
	for(a=11; a<31; a++){
		c=a%2;
		if(c==0){
			printf("¦�� %d��/�� n�� ���մϴ�.\n\n", a);
			n=n+a;
		}
		else{
			printf("%d�� Ȧ�� �Դϴ�.\n\n",a);
		}
	}
	return n;
}

int main(void){
	printf("11���� 30������ ���� �� ¦���� ����: %d\n", adevn());
	return 0;
}
