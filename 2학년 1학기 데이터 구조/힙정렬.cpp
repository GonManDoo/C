#include<stdio.h>
int cnt=0;//��Ƚ�� ī����
int ant=0;//����Ƚ�� ī����

void check(int a){
	printf("checking sign %d\n", a);
} 

//�迭 ��� ��� l���� m���� ����Ѵ�. t�� ��� �� �� �ٲ� ����, 1�� ��� ���� ����. 
void printArr(int a[], int l, int m, int t){
	int i;
	for(i=l-1; i<m; i++){
		printf(" %d", a[i]);
	}
	if(t==1){
		printf("\n");
	}
}

int loc(int p){//�ٷ� �� Ʈ���� ��ǥ 
	 int temp1;
	 
	 temp1=p/2;//�� ���� 
	
	 return p-(temp1+1);
}

int locdown1(int p){//�ٷ� ���� �Ʒ� Ʈ���� ��ǥ 
	int temp;
	
	temp=p;
	temp=p+p+1;
	
	return temp;
}

int locdown(int p, int t){//�ٷ� ���� �Ʒ� Ʈ���� ��ǥ 
	int temp;
	
	if(p==t-1){
		printf("���� ��� ����\n");
		return 0;
	}
	else if(locdown1(p)>=t){
		printf("�� �̻� ������ ��尡 �����ϴ�\n");
		return 0;
	}
	else if(locdown1(p)+1>=t){
		printf("�� �̻� ������ ��尡 �����ϴ�."); 
		return 0;
	}
	
	temp=p;
	temp=p+p+1;
	
	return temp;
}

void siftup(int k[], int t){
	int i;
	int temp;
	
	if(t==0){
		printf("��� �Ǵ� �Լ��� �����: t�� �ֻ��� ���\n");
		return;
	}
	cnt++;//���ϸ� ���� 
	if(k[t]>k[loc(t)]){
		ant++; //�����ϸ� ���� 
		
		temp=k[loc(t)];//���� ��� �� ���� ���� 
		k[loc(t)]=k[t];//���� ���� ��ü 
		k[t]=temp;
		
		printArr(k, 1, 9, 1);
		
		t=loc(t);//���� ��� ��ǥ�� �޾Ƽ�
		siftup(k, t);//��� 
	}
	else{
		return;//��ũ�� ������
	}
	
} 

/*���� ����*/ 
void siftdown1(int k[], int i, int t){
	int temp;
	if(locdown(i, t)==0){
		return;
	}
	if(k[locdown(i, t)]>=k[locdown(i, t)+1]){//������ �� ũ�ų� ������
	cnt++;
		if((k[locdown(i, t)])>k[i]){//������ ���� k[i]���� ũ��
			ant++;
			temp=k[locdown(i, t)];//���ʲ� ���ΰ� 
			k[locdown(i, t)]=k[i];//�������� ������ 
			k[i]=temp;//���� ���ʰ� ���� �ø� 
			
			printArr(k, 1, 9, 1);
		
			i=locdown(i, t);//���� �� i ��ǥ ���� �Ʒ��� �ű�
			siftdown1(k, i, t);//��� 
			return;
		}
		return;
	}
	else{//�������� �� ũ��  
	cnt++;
		if(k[locdown(i, t)+1]>k[i]){
			ant++;
			temp=k[locdown(i, t)+1];//�����ʲ� ���ΰ� 
			k[locdown(i, t)+1]=k[i];//���������� ������ 
			k[i]=temp;//���� �����ʰ� ���� �ø�
			
			printArr(k, 1, 9, 1);
			
			i=locdown(i, t)+1;//���� �� i ��ǥ ���� �Ʒ��� �ű�
			siftdown1(k, i, t);//��� 
			return;
		} 
		return;
	}
	return;
}

void siftdown(int k[], int t, int i){//i�� ���� ������ �ϴ� ������ ��ǥ�� 
	int temp;
	
	if(k[0]<k[t]){
		return;
	}
	
	temp=k[0];
	k[0]=k[t];
	k[t]=temp;

	printArr(k, 1, t+1, 1);

	siftdown1(k, i, t);
}

int main(void){
	int n;
	int a[9]={11, 22, 33, 44, 55, 66, 77, 88, 99};
	
	for(n=1; n<9; n++){
		printf("\ni=%d:	",n);
		siftup(a, n);
	}
	
	printf("\n#siftup#���� ���\n");
	printArr(a, 1, 9, 1);
	printf("\n#siftup#\n��Ƚ��: %dȸ\n����Ƚ��: %dȸ\n", cnt, ant);
	
	for(n=8; n>0; n--){
		printf("\n\ni=%d:	",n);
		siftdown(a, n, 0);
	}
	
	printf("\n#siftdown#���� ���\n");
	printArr(a, 1, 9, 1);
	printf("\n#siftdown#\n��Ƚ��: %dȸ\n����Ƚ��: %dȸ\n", cnt, ant);
	
	
}
