#include<stdio.h>

#define max 9
#define SIZE 1024

int cnt=0;//�� Ƚ�� ī���� 
int ant=0;//���� Ƚ�� ī���� 

void check(int a){
	printf("checking sign %d\n", a);
} 

//�迭 ��� ��� l���� m���� ����Ѵ�. t�� ��� �� �� �ٲ� ����, 1�� ��� ���� ����. 
void printArr(int a[], int l, int m, int t){
	int i;
	printf("%d", a[l]);
	for(i=l+1; i<m; i++){
		printf(" %d", a[i]);
	}
	if(t==1){
		printf("\n");
	}
}

//���� ���� üũ ��� 
void prtnow(int l, int m, int h){
	printf("Start:	%d\nEnd:	%d\nPivot:	%d\n\n", l, h, m);
}


void quicksort(int a[], int s, int e){
	int temp;
	int p=s;//pivot�� ù��° ������ ���� 
	int k=e-s;
	int L, S;
	int i, n;
	
	/*LARGE*/
	for(i=s; i<e+1;	i++){
		if(a[s]<a[i]){//LARGE ã���� 
			L=i;//LARGE�� �����ϰ� 
			break;//FOR�� ���� 
		}
		else if(i==e){//������ ���µ��� ������ 
			temp=a[s];//a[s]�� a[e]�� �ٲ�:a[s]�� ���� ũ�ٴ� ���̹Ƿ� 
			a[s]=a[i];
			a[i]=temp;
			return;//�׸��� ���� 
		}
	}
	
	/*SMALL*/
	for(i=e; i>s-1; i--){
		if(a[s]>a[i]){
			S=i;
			break;
		}
		if(i==s){
			temp=a[s];//a[s]�� a[L-1]�̶� �ٲ� 
			a[s]=a[L-1];
			a[L-1]=temp; 
			return ;//������ ������, ���� ���ʿ� �� �ְ� ���� 
		}
	}
	
	quicksort(arr, 1, p-1);
	quicksort(aar, p+1, e);
	
	
}


int main(){
	int i;

	int a[max]={66,33,88,44,99,77,11,55,22};
	
	int b[max]={99,88,77,66,55,44,33,22,11};
	
	printArr(a, 0, max, 1);
	printArr(b, 0, max, 1);
}
