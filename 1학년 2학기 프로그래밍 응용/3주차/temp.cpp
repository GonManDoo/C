#include<stdio.h>
#include<stdlib.h>
#include<time.h>
RNDX(int x, int y){
	int i, seed;
	int a;
	int c;
	seed=(unsigned)time(NULL);
	srand(seed);
	printf("%d부터 %d사이의 난수 만들기\n", x, y);
	c=y-x;
	for(i=0; i<7; i++){
		a=rand()%c;
		a=a+x;
	}
	return a;
}

int main(){
	int q,e;
	int a;
	
	printf("난수를 범위를 지정하시오.\n");
	scanf("%d", &q);
	
	printf("앞에 입력한 숫자보다 큰 숫자를 입력하여\n난수 범위를 지정하시오.\n");
	scanf("%d", &e);
	
	a=RNDX(q, e);
	printf("난수: %d\n", a);
}
