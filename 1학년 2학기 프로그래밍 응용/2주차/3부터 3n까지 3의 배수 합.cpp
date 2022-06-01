#include<stdio.h>
int temp=0;
int sum=0;
int trpl(int);

int main(void){
	int tri=0;
	int c;
	
	while(1){
		printf("3의 배수를 입력하시오.\n");
		scanf("%d",&tri);
		if(tri<0){
			printf("음수는 입력하실 수 없습니다.\n");
			printf("다시 입력해주세요.\n\n");
		}
		else if(tri%3!=0){
			printf("3의 배수가 아닙니다.\n");
			printf("다시 입력해주세요.\n\n");
		}
		else if(tri>=0 && tri%3==0){
			printf("정상 입력 확인 완료\n");
			break;
		}
	}
	
	c=trpl(tri);
	
	printf(" = %d", c);
	
	return 0;
}

int trpl(int n){
	static int sum;
	if(n>=3){
		trpl(n-3);
		
		if(temp==0){
			printf(" %d", n);
		}
		else{
			printf (" + %d", n);
		}
		
		sum=sum+n;
		temp++;
	}
	return sum;
}
