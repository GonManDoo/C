#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main( )
{
    char s1[300];
    int i=0;
    
    printf("���� �ҹ��� ���ڿ��� �Է��Ͻÿ�:");
    gets(s1); 
    
    printf("�Է� ���ڿ� Ȯ��: %s\n",s1);
    
    /*����->^�� ��ȯ*/ 
	for (i = 0; i < sizeof(s1); i++)
    {
        if (s1[i] == ' ')//������ ã���� 
        {
            s1[i] = '^';//��ȯ�� 
        }
    
    /*�ҹ��ڸ� �빮�ڷ�*/ 
    if(s1[i] >= 'a' && s1[i] <= 'z'){
    	s1[i]=s1[i]-32;//�ƽ�Ű �ڵ� �������� 32���� ���� ������ 32�� �� ���� ���� 
    }

	}
	
	/*���*/ 
    printf("%s\n", s1);

    return 0;
}
