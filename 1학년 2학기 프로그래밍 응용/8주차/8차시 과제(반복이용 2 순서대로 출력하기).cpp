#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�Է� ���� �Ųٷ� ��� �Ǵ� ���� ����!->������ 
//�⺻ �Է°� �ٸ��� �̰Ŵ� ó�� �ִ� ���� �ڷ� �и鼭 ���� ������
//->�׷� �Ųٷ� ����� �ȵǳ�? , �Ųٷ� �Էµ� ���� 

void delete_item(struct goods **, int);

		struct goods{
		char name[20];
		int price;
		int stock;
		int year;
		struct goods *next;
		};


	int main(void){
		int n;
	
		struct goods *p, *a, *h, *b=0, *q=0, *z=0;
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
		
			printf("\n");
					
			p->next=q;//p�� next���� q���� 0�� ��´�. 
			
			q=p;//0�̾��� q���� p�� �ּҸ� �Ҵ��Ѵ�.(������ ����� ���� �ڷ� �̷�) 
			
		}
		
		/*�߰� ������� ó�� ����*/ 
			while(p!=0){
			a = (struct goods *)malloc(sizeof(struct goods)); //a �� ����ü �޸� �Ҵ�
			h = (struct goods *)malloc(sizeof(struct goods)); //x �� ����ü �޸� �Ҵ� 

			/*�Է� ��Ʈ*///
		    strcpy(a->name, p->name);
			a->price=p->price;
			a->stock=p->stock;
			a->year=p->year;
	
			/*�Է� ��Ʈ*///
		    strcpy(h->name, p->name);
			h->price=p->price;
			h->stock=p->stock;
			h->year=p->year;
			
			a->next=b;//p�� next���� q���� 0�� ��´�.
			h->next=z; 
			
			b=a;//0�̾��� q���� p�� �ּҸ� �Ҵ��Ѵ�.(������ ����� ���� �ڷ� �̷�) 
			z=h;
			p=p->next;
		}
		
		while(h!=0){//���
			printf("	%s	%d	%d	%d\n",h->name, h->price,h->stock,h->year);
			h=h->next; 
		}
	
		while(q!=0){
		p = q-> next; 
		free(q); 
		q=p;}		
		
		//���� ��Ʈ 
		printf("������ ������ �Է�:");
		scanf("%d", &n);
		delete_item(&a, n); //p���� ���Ÿ� �ع����� 
		
		while(a!=0){//���
			printf("	%s	%d	%d	%d\n",a->name, a->price,a->stock,a->year);
			a=a->next;
		}
		
}

void delete_item(struct goods **head, int x){
	struct goods *c, *d;

	if(*head == 0){
		printf("empty list\n");
		return;
	}
		
	c=*head;
	d=0;	
	while(c!=0 && c->price!=x){
		d=c;
		c=c->next;
	}

	if(c==0){
		printf("%d does not exist\n",x);
		return;
	}	
	if(d==0){
		*head=c->next;		
	}	
	else{
		d->next=c->next;
		return;
	}
	
}


