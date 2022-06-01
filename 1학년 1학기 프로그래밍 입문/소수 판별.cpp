#include <stdio.h>

int main(void)
{
	int A, i, rest; //입력받을 숫자, 나누는 수, 나머지 값
	
	
	/*숫자 입력받기*/
	printf("소수 판별을 원하는 숫자를 입력해주세요.\n");
	scanf("%d",&A); 
	
	/*main 처리 파트*/ 
	for(i=2; i<A; i++) //나누는 수 증가 
	{
		rest= A%i; //나누고 나머지 대입 
		
		//나머지가 0이 되는지 
		if(rest==0){ 
		printf("소수가 아닙니다.\n");
		break;}
		
		else{
		printf("처리중\n");}
	 } 
	 //완벽하게 통과했다면 
	 if(i == A)
	 printf("소수가 맞습니다.\n");
	 
	 return 0; 
	 
}
