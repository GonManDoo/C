#include<stdio.h>
int MINX(int s[3][4]){
	int i, w, temp;
	int S[12];
	int t=0;
	
	//1차원 배열로 옮기기  
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		S[t]=s[i][w];
		t++;
		}
	}
	
	//1차원 배열에서 정렬
	for(i=0; i<12; i++){
		for(w=0; w<11; w++){
			if(S[w]>S[w+1]){
				temp=S[w];
				S[w]=S[w+1];
				S[w+1]=temp;
			}
		}	
		}
	
	return S[0];
}

int main(){
	int a[3][4];
	int i, w;
	int C;
	
	//행렬 a 입력받기 
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		printf("a[%d][%d]입력: ", i, w);
		scanf("%d", &a[i][w]);
		}
		printf("\n");
	}
	
	//행렬 a 출력  
	for(i=0; i<3; i++){
		for(w=0; w<4; w++){
		printf("a[%d][%d]: %d	", i, w, a[i][w]);
		}
		printf("\n\n");
	}
	
	C=MINX(a);
	
	printf("행렬의 원소들 중 가장 작은 값: %d\n", C);
}
