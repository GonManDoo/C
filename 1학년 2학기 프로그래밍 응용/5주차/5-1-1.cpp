#include<stdio.h>

int chrnum(char *, char);

int main(){
	char a[50]="Hello World!";
	char b;
	int C;
	
	printf("input the char you wanna count\n");
	scanf("%c",&b);
	
	C=chrnum(a, b);
	
	printf("���ڿ� %s ��\n", a);
	printf("�Է� ���� ���� %c�� ����: %d", b, C);
}

int chrnum(char *s, char c){
	int i;
	int f=0;
	
	for(i=0; i<50; i++){
		if(*(s+i)==c){
			f++;
		}
	}

	return f;
}
