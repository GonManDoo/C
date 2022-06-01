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
	
/*push_node �Լ�, ���� ���� ���� ���� ������ �ѱ�� ������ ��*/ 
void push_node(struct goods** head, char *name, int price, int stock, int year){
	struct goods *p; 
	
	p=(struct goods*)malloc(sizeof(struct goods));
	strcpy(p->name, name);
	p->price=price;
	p->stock=stock;
	p->year=year;
	
	p->next=*head; //p�� next�� head�� �ּ� ���� 
	*head=p;
	return;
	
} 


int main(void){
	
	struct goods *list=0, *p;
	
	for(int i=3; i>0; i--){
	list = (struct goods *)malloc(sizeof(struct goods)); //list �� ����ü �޸� �Ҵ�
	/*�Է� ��Ʈ*/ 
		printf("name�� �Է�\n");
		scanf("%s", list->name,30);//����ü p�� �� �� 
		
		printf("price�� �Է�\n");
		scanf("%d",&list->price);//����ü p�� �� �� 
	
		printf("stock�� �Է�\n");
		scanf("%d",&list->stock);//����ü p�� �� �� 

		printf("year �Է�\n");
		scanf("%d",&list->year);//����ü p�� �� �� 
	
		push_node(&list,&list->name, &list->price, &list->stock, &list->year );
	}
	p=list;

	while(p!=0){//����� �Ųٷ� �ϴ� ����� ã�� ���� 
		printf("	%s	%d	%d	%d\n",p->name, p->price,p->stock,p->year);
		p=p->next;
		}
}
