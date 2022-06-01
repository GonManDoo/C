#include<stdio.h>
#define SIZE 10

int main(void)
{
	int want; //좌석 예약 여부  
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10}; //좌석 이름 배열 
	int i, a; //i는 좌석 초기화 문자, a는 배열 담당 문자 
	char seats[SIZE]; //좌석 예약 여부 
	int b; //b는 예약 좌석 배열 담당 문자
	
	/*seats에 y입력*/ 
	for(a=0; a<10; a++){
		seats[a]='y';
	}
	/*다시 한번 돌리는 프로그램*/
	while(1){
	printf("좌석 예약을 원하시면 숫자1, 종료를 원하시면 숫자2를 입력해주세요.\n");
	scanf("%d",&want);
	
	if(want==2){
	return 0;}
	
	/*좌석 배치표*/ 
	printf("현재 예약 가능한 좌석입니다.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	
	/*예약좌석입력*/ 
	printf("원하시는 좌석의 이름을 입력해주세요.\n");
	 scanf("%d", &b);
	 
	 if(b<11){
	 	seats[b-1]='n';
	 	
	 	printf("예약이 완료되었습니다.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	 }
	 else printf("잘못된 좌석 번호입니다.  다시한번 시도해주세요.");
}
	
	return 0;
 } 
