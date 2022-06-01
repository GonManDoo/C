#include<stdio.h>

int main(void){
	
	int a, b; //보드판 좌표 값 
	char board[3][3];
	char user; //본인 확인
	
	/*a, b 축 입력받기*/
	a=0; //초기화 
	b=0; 
	printf("입력을 원하는 좌표를 입력해주세요.\n");
	while(1){
    printf("가로:\n");
    scanf("%d", &a);
    if(a>3){
    	printf("1과 3사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	while(1){
    printf("세로:\n");
    scanf("%d", &b); 
    if(b>3){
    	printf("1과 3사이에서 다시 입력해주세요.\n");
	}
	else break;}
	
	printf("a: %d b: %d\n", a, b); // 입력 문자 확인 모듈
	
	a=a-1;
	b=b-1;
	
	printf("a: %d b: %d\n", a, b); // 입력 문자 확인 모듈
	
	return 0;
    }
