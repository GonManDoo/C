#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main( )
{
    char s1[300];
    char *temp;
    int i=0;
    
    printf("���� �ҹ��� ���ڿ��� �Է��Ͻÿ�:");
    scanf("%s", s1);
    
    printf("�Է� ���ڿ� Ȯ��: %s\n",s1);
    
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
