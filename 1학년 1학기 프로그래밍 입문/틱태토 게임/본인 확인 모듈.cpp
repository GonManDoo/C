#include<stdio.h>

int main(void){
	
	int a, b; //보드판 좌표 값 
	char board[3][3];
	char user;
	
	/*본인 확인*/
	printf("플레이어의 입력문자를 입력해주세요.(O랑 X 중에서)\n");
	scanf("%c", &user);
	
	printf("%c", user); // 입력 문자 확인 모듈 
	
	return 0;
}
