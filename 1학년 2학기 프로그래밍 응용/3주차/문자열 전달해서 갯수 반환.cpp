#include<stdio.h>

int chrnum(char s[], char c){
	int i;
	int n=0;
	
	for(i=0; i<50; i++){
		if(s[i]==c){
			n++;
		}
	}
	
	return n;
}

int main(){
	char a[50];
	char b, Re;
	
	printf("���ڿ� �Է�\n");
	gets(a);
	
	printf("���� �Է�\n");	
	scanf("%c", &b);
	
	Re=chrnum(a, b);
	
	printf("%d\n", Re);
	
	return 0;
}
