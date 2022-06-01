#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main( )
{
    char s1[300];
    int i=0;
    
    printf("영어 소문자 문자열을 입력하시오:");
    gets(s1); 
    
    printf("입력 문자열 확인: %s\n",s1);
    
    /*공백->^로 변환*/ 
	for (i = 0; i < sizeof(s1); i++)
    {
        if (s1[i] == ' ')//공백을 찾으면 
        {
            s1[i] = '^';//변환함 
        }
    
    /*소문자를 대문자로*/ 
    if(s1[i] >= 'a' && s1[i] <= 'z'){
    	s1[i]=s1[i]-32;//아스키 코드 기준으로 32차이 나기 때문에 32를 뺀 값을 넣음 
    }

	}
	
	/*출력*/ 
    printf("%s\n", s1);

    return 0;
}
