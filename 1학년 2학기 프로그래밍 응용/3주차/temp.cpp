#include<stdio.h>
#include<stdlib.h>
#include<time.h>
RNDX(int x, int y){
	int i, seed;
	int a;
	int c;
	seed=(unsigned)time(NULL);
	srand(seed);
	printf("%d���� %d������ ���� �����\n", x, y);
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
	
	printf("������ ������ �����Ͻÿ�.\n");
	scanf("%d", &q);
	
	printf("�տ� �Է��� ���ں��� ū ���ڸ� �Է��Ͽ�\n���� ������ �����Ͻÿ�.\n");
	scanf("%d", &e);
	
	a=RNDX(q, e);
	printf("����: %d\n", a);
}
