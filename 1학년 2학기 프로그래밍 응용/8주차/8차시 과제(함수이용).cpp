#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct goods{
	char name[20];
	int price;
	int stock;
	int year;
	struct goods *next;
	};
	
/*push_node 함수, 전달 받은 값을 다음 값으로 넘기는 역할을 함*/ 
void push_node(struct goods** head, char *name, int price, int stock, int year){
	struct goods *p; 
	
	p=(struct goods*)malloc(sizeof(struct goods));
	strcpy(p->name, name);
	p->price=price;
	p->stock=stock;
	p->year=year;
	
	p->next=*head; //p의 next에 head의 주소 전달 
	*head=p;
	return;
	
} 


int main(void){
	
	struct goods *list=0, *p;
	
	for(int i=3; i>0; i--){
	list = (struct goods *)malloc(sizeof(struct goods)); //list 에 구조체 메모리 할당
	/*입력 파트*/ 
		printf("name을 입력\n");
		scanf("%s", list->name,30);//구조체 p에 입 력 
		
		printf("price를 입력\n");
		scanf("%d",&list->price);//구조체 p에 입 력 
	
		printf("stock을 입력\n");
		scanf("%d",&list->stock);//구조체 p에 입 력 

		printf("year 입력\n");
		scanf("%d",&list->year);//구조체 p에 입 력 
	
		push_node(&list,&list->name, &list->price, &list->stock, &list->year );
	}
	p=list;

	while(p!=0){//출력을 거꾸로 하는 방법을 찾길 원함 
		printf("	%s	%d	%d	%d\n",p->name, p->price,p->stock,p->year);
		p=p->next;
		}
}
