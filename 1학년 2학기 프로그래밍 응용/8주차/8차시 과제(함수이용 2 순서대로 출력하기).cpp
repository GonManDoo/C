#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�Է� ���� �Ųٷ� ��� �Ǵ� ���� ����!->������ 
//�⺻ �Է°� �ٸ��� �̰Ŵ� ó�� �ִ� ���� �ڷ� �и鼭 ���� ������
//->�׷� �Ųٷ� ����� �ȵǳ�? , �Ųٷ� �Էµ� ���� 
	int main(void){
		
		struct goods{
		char name[20];
		int price;
		int stock;
		int year;
		struct goods *next;
		struct goods *next1;
		};
	
		struct goods *p, *list, *b=0, *q=0;
		for(int i=3; i>0; i--){
			p = (struct goods *)malloc(sizeof(struct goods)); //p �� ����ü �޸� �Ҵ� 

			/*�Է� ��Ʈ*/ 
			printf("name�� �Է�\n");
		    scanf("%s", p->name,30);//����ü p�� �� �� 
		
			printf("price�� �Է�\n");
			scanf("%d",&p->price);//����ü p�� �� �� 
	
			printf("stock�� �Է�\n");
			scanf("%d",&p->stock);//����ü p�� �� �� 
	
			printf("year �Է�\n");
			scanf("%d",&p->year);//����ü p�� �� �� 
		
			p->next=q;//p�� next���� q���� 0�� ��´�. 
			
			q=p;//0�̾��� q���� p�� �ּҸ� �Ҵ��Ѵ�.(������ ����� ���� �ڷ� �̷�) 
			
		}
		
		/*�߰� ������� ó�� ����*/ 
			while(p!=0){
			list = (struct goods *)malloc(sizeof(struct goods)); //p �� ����ü �޸� �Ҵ� 

			/*�Է� ��Ʈ*///������ �Էµ� ���� �ڵ����� �Է��ϴ� ��� ã�ƾ� �� 
		    strcpy(list->name, p->name);
			list->price=p->price;
			list->stock=p->stock;
			list->year=p->year;
		
			list->next=b;//p�� next���� q���� 0�� ��´�. 
			
			b=list;//0�̾��� q���� p�� �ּҸ� �Ҵ��Ѵ�.(������ ����� ���� �ڷ� �̷�) 
			p=p->next;
		}
	
		while(list!=0){//����� �Ųٷ� �ϴ� ����� ã�� ���� 
			printf("	%s	%d	%d	%d\n",list->name, list->price,list->stock,list->year);
			list=list->next;
		}

		while(q!=0){
		p = q-> next; 
		free(q); 
		q=p;}
		
}


