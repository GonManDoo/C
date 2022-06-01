#include<stdio.h>
#include<string.h>

int cpystr(char s1[], int n){
	char s2[50];
	int i,a;
	
	//n 번째 이후 문자 저장 
	for(i=n-1; i<50; i++){
		s2[i]=s1[i];
	}
	
	a=strlen(s1)-n;
	return a;
}

int main(){
	char a[50];
	char b, Re;
	
	printf("문자열 입력\n");
	gets(a);
	
	printf("숫자 입력\n");
	scanf("%d", &b);
	
	Re=cpystr(a, b);
	
	printf("%d\n", Re);
	
	return 0;
}
