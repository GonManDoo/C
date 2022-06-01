#include <stdio.h>

int main(void)
{
	char id[20], pw[20];
	int count;
	char ic[5], pc[5];
	
	count=1; //변수 초기화
	 
	
	/*main program*/
	for(count=1; count=5; count++)
	{
		printf("아이디를 입력하세요.\n");
		scanf("%c", &id);
		
		printf("비밀번호를 입력하세요.\n");
		scanf("%c", &pw);
		
		/*아이디 비밀번호 모듈*/ 
		if(id == "computer")
	       ic == "o";
		else
		printf("아이디가 틀립니다.");
		
		if(pw == "pizza")
		   pc == "o";
		else
		printf("비밀번호가 틀립니다."); 
	    
	    /*브레이킹 모듈*/
		if(ic == "o", pc == "o")
		break;
    }
    /*로그인 성공 실패 여부*/ 
    if(count == 5)
    printf("로그인 시도 횟수를 초과하셨습니다. 로그인을 중단합니다.");
    else
	printf("김규택님 환영합니다."); 
	
    return 0;
}
	 
		
