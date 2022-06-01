#include<stdio.h>

struct goods{
	char name[20];
	int price;
	int stock;
	int year; 
	struct goods *next;//���Ḯ��Ʈ 
};

void delete_goods(struct goods *p, int x){
	struct goods *q;
	if(p==0){
		printf("empty list\n");
		return;
	}
	
	q=0;
	
	while(p!=0&& p -> price!=x){
		q=p;
		p=p->next;
	}
	
	if(p==0){
		printf("%d does not exist\n", x);
		
	}
	
	q->next=p->next;
}

int main(void){
	int a;//���� ������  
	struct goods gds3={"��ǳ��", 70000, 33, 2018, 0};
	struct goods gds2={"�̾���", 30000, 55, 2020, &gds3};	
	struct goods gds1={"��ǳ��", 50000, 22, 2019, &gds2};
	
	struct goods *list=&gds1;
	
	printf("��ǰ�� ������ �Է��Ͻÿ�.\n");
	scanf("%d",&a);
	printf("��ǰ Ž�� ����\n");
	delete_goods(list, a);
	
	while(list!=0){
		printf("%s	%d	%d	%d\n", list->name, list->price, list->stock, list->year);
		list=list->next;
	}
}

