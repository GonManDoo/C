#include<stdio.h>
max(int a, int b){
	if(a>b){
		printf("a is bigger\n");
		return a;
	}
	else if(a<b){
		printf("b is bigger\n");
		return b;
	}
	else if(a==b){
		printf("same\n");
		return a;
	}
}

int main(){
	int (*fp)(int a, int b);
	fp = max;
	
	fp(4, 5);
}
