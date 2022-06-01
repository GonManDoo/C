#include<stdio.h>

int main(void){
	
    int x, y, a, b, c;



    char d, k; 



    char s[20]; 



    scanf("%3d%3d", &x, &y);                    // 456789



    printf("x=%d, y=%d\n", x, y);



    scanf("%d %o %x", &a, &b, &c);       // 22 22 22



    printf("a=%d, b=%d, c=%d\n", a, b, c);



    scanf("%c%c", &d, 5, &k, 5);          // d k



    printf("d=%c, k=%c\n", d, k); 



    scanf("%[sci]", s, 20);               // science



    printf("입력된 문자열은 %s\n", s);

}
