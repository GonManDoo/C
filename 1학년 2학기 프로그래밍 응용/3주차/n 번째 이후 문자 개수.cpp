#include<stdio.h>
#include<string.h>

int cpystr(char s1[], int n){
	char s2[50];
	int i,a;
	
	//n ��° ���� ���� ���� 
	for(i=n-1; i<50; i++){
		s2[i]=s1[i];
	}
	
	a=strlen(s1)-n;
	return a;
}

int main(){
	char a[50];
	char b, Re;
	
	printf("���ڿ� �Է�\n");
	gets(a);
	
	printf("���� �Է�\n");
	scanf("%d", &b);
	
	Re=cpystr(a, b);
	
	printf("%d\n", Re);
	
	return 0;
}
