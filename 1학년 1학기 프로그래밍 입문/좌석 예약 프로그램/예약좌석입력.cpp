#include<stdio.h>
#define SIZE 10

int main(void){
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
	int i, a; //i는 좌석 초기화 문자, a는 배열 담당 문자 
	char seats[SIZE];
	int b; //b는 예약 좌석 배열 담당 문자
	
	 printf("원하시는 좌석의 이름을 입력해주세요.\n");
	 scanf("%d", &b);
	 
	 if(b<11){
	 	seats[b]='n';
	 }
	 else printf("잘못된 좌석 번호입니다.  다시한번 시도해주세요.");
	 
	 return 0; 
}
