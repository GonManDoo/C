#include<stdio.h>

int PRIM(int n){
	int i, a;
	int t[1000];
	int sum=0;
	
	//t[i] �ʱ�ȭ  
	for(i=0; i<n+1; i++){
		t[i]=i;
	}
	
	for(i=2; i<n+1; i++){
		for(a=2; a<t[i]; a++){
			if(t[i]%a == 0){
				t[i]=0;
			}
		}
	}
	
	//���� ���ϱ� 
	for(i=2; i<n+1; i++){
	sum=sum+t[i];
	}
	
	return sum;
}

int main(){
	int a;
	
	printf("1000�̸��� ���� �Է�:");
	scanf("%d", &a);
	
	printf("%d���� ���� �Ҽ����� ����: %d", a, PRIM(a));
}
