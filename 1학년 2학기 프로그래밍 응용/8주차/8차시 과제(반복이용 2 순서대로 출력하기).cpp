#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//입력 값이 거꾸로 출력 되는 문제 있음!->정상임 
//기본 입력과 다르게 이거는 처음 넣는 값을 뒤로 밀면서 가는 구조임
//->그럼 거꾸로 출력이 안되나? , 거꾸로 입력도 있음 

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
		
			printf("\n");
					
			p->next=q;//p의 next에는 q값인 0을 담는다. 
			
			q=p;//0이었던 q에는 p의 주소를 할당한다.(기존에 저장된 값을 뒤로 미룸) 
			
		}
		
		/*중간 순서대로 처리 과정*/ 
			while(p!=0){
			a = (struct goods *)malloc(sizeof(struct goods)); //a 에 구조체 메모리 할당
			h = (struct goods *)malloc(sizeof(struct goods)); //x 에 구조체 메모리 할당 

			/*입력 파트*///
		    strcpy(a->name, p->name);
			a->price=p->price;
			a->stock=p->stock;
			a->year=p->year;
	
			/*입력 파트*///
		    strcpy(h->name, p->name);
			h->price=p->price;
			h->stock=p->stock;
			h->year=p->year;
			
			a->next=b;//p의 next에는 q값인 0을 담는다.
			h->next=z; 
			
			b=a;//0이었던 q에는 p의 주소를 할당한다.(기존에 저장된 값을 뒤로 미룸) 
			z=h;
			p=p->next;
		}
		
		while(h!=0){//출력
			printf("	%s	%d	%d	%d\n",h->name, h->price,h->stock,h->year);
			h=h->next; 
		}
	
		while(q!=0){
		p = q-> next; 
		free(q); 
		q=p;}		
		
		//제거 파트 
		printf("제거할 가격을 입력:");
		scanf("%d", &n);
		delete_item(&a, n); //p에서 제거를 해버리고 
		
		while(a!=0){//출력
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


