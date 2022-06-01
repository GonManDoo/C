#include<stdio.h>
//divide and conquer ���� ���� 
#define max 8
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
	printf("Low:	%d\nHigh:	%d\nMid:	%d\n\n", l, h, m);
}

//conquer 
void merge(int a[], int low, int mid, int high) {
	
	prtnow(low, mid, high);
     
    int i, n;
    int L, R;
    int temp[SIZE]; 
    
    L=low;//���� �迭 ������ 
    R=mid+1;//���� �迭 ������
    i=low; 
 
 	//�� �� temp�� ���� 
    while(L<=mid&&R<=high){
    	check(1);
    	if(a[L]<=a[R]){
    		ant++;
    		cnt++;
    		check(2);
    		temp[i]=a[L];
    		printf("temp[%d]: %d\n", i, temp[i]);
    		i++;
    		L++;
		}
		else{
			check(3);
			ant++;
			cnt++;
			temp[i]=a[R];
			printf("temp[%d]: %d\n", i, temp[i]);
			i++;
			R++;
		}
		check(4);
	}
	for(; L<=mid; L++, i++){
		check(5);
		ant++;
		temp[i]=a[L];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	for(; R<=high; R++, i++){
		check(6);
		ant++;
		temp[i]=a[R];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	for(i=low; i<=high; i++){
		check(7);
		a[i]=temp[i];
		printf("temp[%d]: %d\n", i, temp[i]);
	}
	check(8);
}

//divide
void mergesort(int a[], int low, int high){
	int m = (low + high)/2;//low�� high ������ �߰� ���� ���ϰ�, �߰� ���� low�� ������ �Ѵ�. 
	prtnow(low, m, high);//���� �Լ��� low high mid�� �ľ��ϰ� 
	cnt++;//�� ������ ���� 
	if(low<high){//low�� high���� ���� �� 
		//left
		printf("�� [left]\n");
		mergesort(a, low, m);//�ٽ� low���� m���� sort�ϰ� 
		//right
		prtnow(low, m, high);//���� �Լ��� low high mid�� �ľ��ϰ� 
		printf("�� [right]\n");
		mergesort(a, m+1, high);//�ٽ� m+1���� high���� sort�� 
		
		
		printf("\nEnd Of Dividing\n\n");
		 
		//������� ��� dividing�� ������ 
		//conquer ������ �ǽ��Ѵ�.
		printArr(a, low, high+1, 0);
		printf("�� ���� merge ������\n");
		merge(a, low, m, high);
		printArr(a, low, high+1, 1);
		printf("\n");
	}
	else{//low�� high���� ũ�� ���� �ȵǰ�, ������ ���� 1���ۿ� �����Ƿ� �� �̻� �ɰ� �ʿ䰡 ���� ���� ������. 
		printArr(a, low, high+1, 0);
		printf("�� ���� ");
		if(low==high){
			printf("���� ����: low�� high�� ����: ���̻� �ɰ� �ʿ䰡 ����\n");
			printf("��:	low�� %d, high�� %d�Դϴ�.\n\n", low, high);
		} 
		else{
			printf("���� ����: low�� high���� ŭ: ����\n");
			printf("��:	low�� %d, high�� %d�Դϴ�.\n\n", low, high);
		}
		return;
	}
}

int main(){
	int i;

	int a[max]={99,55,88,33,77,44,66,22};
	
	int b[max]={55,44,33,22,99,88,77,66};
	printArr(a, 0, max, 1);
	
	mergesort(a, 0, max-1);
	
	printArr(a, 0, max, 1);
	
	printf("�迭 a�� �� �� Ƚ��:	%d\n", cnt);
	
	printf("�迭 a�� �� ���� Ƚ��:	%d\n", ant);

	printf("\n\n\n\n\n\n\n\n\n\n");
	
	cnt=0;
	ant=0;
	
	printArr(b, 0, max, 1);
	
	mergesort(b, 0, max-1);
	
	printArr(b, 0, max, 1);
	
	printf("�迭 b�� �� �� Ƚ��:	%d\n", cnt);
	
	printf("�迭 b�� �� ���� Ƚ��:	%d\n", ant);
	
}
