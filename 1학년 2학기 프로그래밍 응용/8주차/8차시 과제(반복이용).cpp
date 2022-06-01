#include<stdio.h>
#include<stdlib.h>

//입력 값이 거꾸로 출력 되는 문제 있음!->정상임 
//기본 입력과 다르게 이거는 처음 넣는 값을 뒤로 밀면서 가는 구조임->그럼 거꾸로 출력이 안되나? 
	int main(void){
		
		struct goods{
		char name[20];
		int price;
		int stock;
		int year;
		struct goods *next;
		};
	
		struct goods *p, *q=0;
	
		for(int i=3; i>0; i--){
			p = (struct goods *)malloc(sizeof(struct goods)); //p 에 구조체 메모리 할당 

			/*입력 파트*/ 
			printf("name을 입력\n");
		    scanf("%s", p->name,30);//구조체 p에 입 력 
		
			printf("price를 입력\n");
			scanf("%d",&p->price);//구조체 p에 입 력 
	
			printf("stock을 입력\n");
			scanf("%d",&p->stock);//구조체 p에 입 력 
	
			printf("year 입력\n");
			scanf("%d",&p->year);//구조체 p에 입 력 
		
			p->next=q;//p의 next에는 q값인 0을 담는다. 
			
			q=p;//0이었던 q에는 p의 주소를 할당한다.(기존에 저장된 값을 뒤로 미룸) 
		}
	
		while(p!=0){//출력을 거꾸로 하는 방법을 찾길 원함 
			printf("	%s	%d	%d	%d\n",p->name, p->price,p->stock,p->year);
			p=p->next;
		}
	
		while(q!=0){
		p = q-> next; 
		free(q); 
		q=p;}
		
	}


