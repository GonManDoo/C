#include<stdio.h>

int main(){
    int x= 4, y = 8, *p, *q;
	p = &x; q = &y; 
	*p = y - 3;
	y = *p + 2;
	p = &y; 
	y = *p - x;
	printf("%d\t%d\t%d\t%d\n", x, y, *p, *q); 
}
