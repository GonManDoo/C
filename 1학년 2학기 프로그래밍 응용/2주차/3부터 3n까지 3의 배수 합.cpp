#include<stdio.h>
int temp=0;
int sum=0;
int trpl(int);

int main(void){
	int tri=0;
	int c;
	
	while(1){
		printf("3�� ����� �Է��Ͻÿ�.\n");
		scanf("%d",&tri);
		if(tri<0){
			printf("������ �Է��Ͻ� �� �����ϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if(tri%3!=0){
			printf("3�� ����� �ƴմϴ�.\n");
			printf("�ٽ� �Է����ּ���.\n\n");
		}
		else if(tri>=0 && tri%3==0){
			printf("���� �Է� Ȯ�� �Ϸ�\n");
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
