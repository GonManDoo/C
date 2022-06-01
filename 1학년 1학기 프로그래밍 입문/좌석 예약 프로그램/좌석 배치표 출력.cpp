#include<stdio.h>
#define SIZE 10
/*좌석 배치표 출력*/

int main(void)
{
	int name[SIZE] = {1, 2, 3, 4, 5, 6 ,7, 8, 9, 10};
	int i, a;
	char seats[SIZE];
	
	/*seats에 y입력*/ 
	for(a=0; a<10; a++){
		seats[a]='y';
	}
	
	printf("현재 예약 가능한 좌석입니다.\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d: %c\n", i+1, seats[i]);
		
	 }
	 return 0;
 } 
