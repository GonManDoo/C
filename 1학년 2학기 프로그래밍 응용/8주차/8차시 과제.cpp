#include<stdio.h>
#include<stdlib.h>

//구조체 정의 name, price, stock, year, *next->해결 완료 
//키보드 입력->해결 완료 
//list가 첫 노드를 포인트하도록 구성->해결 완료 
//데이터 출력 -> 해결 완료 
//마지막 빼고 나머지가 출력이 안되는 문제 있음->해결 완료
int main(){
	struct goods{
	char name[20];
	int price;
	int stock;
	int year;
	struct goods *next;
	};
	
	struct goods *list=0, *p, *q; //외부 포인터 
	list = (struct goods*)malloc(sizeof(struct goods));

/*입력 파트*/ 
	printf("name을 입력\n");
    scanf("%s", list->name,30);

	printf("price를 입력\n");
	scanf("%d",&list->price);

	printf("stock을 입력\n");
	scanf("%d",&list->stock);

	printf("year 입력\n");
	scanf("%d",&list->year);
	
/*list의 struct goods next에 p를 연결*/ 
	p=(struct goods*)malloc(sizeof(struct goods));
	list->next=p;
	
/*입력 파트*/ 
	printf("name을 입력\n");
    scanf("%s", p->name,30);
	
	printf("price를 입력\n");
	scanf("%d",&p->price);
	
	printf("stock을 입력\n");
	scanf("%d",&p->stock);
	
	printf("year 입력\n");
	scanf("%d",&p->year);
	
/*p의 struct goods next에 q를 연결*/ 
	q=(struct goods*)malloc(sizeof(struct goods));
	p->next=q;

/*입력파트*/ 
	printf("name을 입력\n");
    scanf("%s", q->name,30);
	
	printf("price를 입력\n");
	scanf("%d",&q->price);
	
	printf("stock을 입력\n");
	scanf("%d",&q->stock);
	
	printf("year 입력\n");
	scanf("%d",&q->year);
	
/*q의 struct goods next에 0을 입력*/ 
	q->next=0;
	
	
	while(list!=0){
		printf("	%s	%d	%d	%d\n", list->name, list->price, list->stock, list->year);
		list=list->next; //list에 list의 next 값을 넣어줌-> list->p->q 순으로 입력됨 
		
	} 
	
	return 0;
	
}


