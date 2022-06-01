#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main( )
{
    char s1[300];
    char *temp;
    int i=0;
    
    printf("영어 소문자 문자열을 입력하시오:");
    scanf("%s", s1);
    
    printf("입력 문자열 확인: %s\n",s1);
    
	for (i = 0; i < sizeof(s1); i++)
    {
        if (s1[i] == ' ')
        {
            s1[i] = '^';
        }
    }
    printf("%s\n", s1);

    return 0;
}
