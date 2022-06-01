#include<stdio.h>
#include<string.h>

int cpystr(char * , int n);

int main(){
	char a[50]="Hello World";
	int b,c;
	
	printf("input the int >0\n");
	scanf("%d", &b);
	
	c=cpystr(a, b);
	
	printf("the char count after nth of string s1: %d\n", c);
	
}

int cpystr(char *s1, int n){
	char s2[50];
	int i,a;
	
	//n 번째 이후 문자 저장 
	for(i=n-1; i<50; i++){
		s2[i]=*(s1+i);
	}
	
	a=strlen(s1)-n;
	return a;
}
