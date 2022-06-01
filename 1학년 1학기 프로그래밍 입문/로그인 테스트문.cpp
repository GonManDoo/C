#include <stdio.h>

int main(void)
{
	int count;
	char id[20], pw[20];
	int ic, pc;
	
	for(count=1; count<6; count++)
	{
		printf("아이디\n");
		scanf("%c", &id);
		
		printf("비밀번호\n");
		scanf("%c", &pw);
		
		if(id=="computer")
		ic=1;
		else
		printf("아이디 틀림\n");
		
		if(pw=="pizza")
		pc=1;
		else
		printf("비번 틀림\n");
		
		if(ic==1, pc==1)
		break; 
	}
	if(count==5)
	printf("로그인 실패\n");
	else
	printf("로그인 성공\n");
	
	return 0;
}
