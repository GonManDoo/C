#include<stdio.h>
#include<stdlib.h>

//����ü ���� name, price, stock, year, *next->�ذ� �Ϸ� 
//Ű���� �Է�->�ذ� �Ϸ� 
//list�� ù ��带 ����Ʈ�ϵ��� ����->�ذ� �Ϸ� 
//������ ��� -> �ذ� �Ϸ� 
//������ ���� �������� ����� �ȵǴ� ���� ����->�ذ� �Ϸ�
int main(){
	struct goods{
	char name[20];
	int price;
	int stock;
	int year;
	struct goods *next;
	};
	
	struct goods *list=0, *p, *q; //�ܺ� ������ 
	list = (struct goods*)malloc(sizeof(struct goods));

/*�Է� ��Ʈ*/ 
	printf("name�� �Է�\n");
    scanf("%s", list->name,30);

	printf("price�� �Է�\n");
	scanf("%d",&list->price);

	printf("stock�� �Է�\n");
	scanf("%d",&list->stock);

	printf("year �Է�\n");
	scanf("%d",&list->year);
	
/*list�� struct goods next�� p�� ����*/ 
	p=(struct goods*)malloc(sizeof(struct goods));
	list->next=p;
	
/*�Է� ��Ʈ*/ 
	printf("name�� �Է�\n");
    scanf("%s", p->name,30);
	
	printf("price�� �Է�\n");
	scanf("%d",&p->price);
	
	printf("stock�� �Է�\n");
	scanf("%d",&p->stock);
	
	printf("year �Է�\n");
	scanf("%d",&p->year);
	
/*p�� struct goods next�� q�� ����*/ 
	q=(struct goods*)malloc(sizeof(struct goods));
	p->next=q;

/*�Է���Ʈ*/ 
	printf("name�� �Է�\n");
    scanf("%s", q->name,30);
	
	printf("price�� �Է�\n");
	scanf("%d",&q->price);
	
	printf("stock�� �Է�\n");
	scanf("%d",&q->stock);
	
	printf("year �Է�\n");
	scanf("%d",&q->year);
	
/*q�� struct goods next�� 0�� �Է�*/ 
	q->next=0;
	
	
	while(list!=0){
		printf("	%s	%d	%d	%d\n", list->name, list->price, list->stock, list->year);
		list=list->next; //list�� list�� next ���� �־���-> list->p->q ������ �Էµ� 
		
	} 
	
	return 0;
	
}


