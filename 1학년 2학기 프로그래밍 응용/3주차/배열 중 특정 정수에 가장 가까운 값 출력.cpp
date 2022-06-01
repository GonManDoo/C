#include<stdio.h>
int last(int a, int b, int x){
	if(b==1){
		a=a-a-a; //원래 음수였으면 다시 음수로 돌림
		return a+x;
	}
	else if(b<1){
		return a+x;
	}
}

void NEAR(int S[10], int x){
	int i,a;
	int temp;
	int tem[10]; 
	
	//tem 값 초기화 
	for(i=0; i<10; i++){
			tem[i]=0;
			}

	//각각의 값에서 x를 뺌 
	for(i=0; i<10; i++){
		S[i]=S[i]-x;
		}
	
	//음수 일 경우 절댓값으로 바꾸고, tem 값 1로 변경 
	for(i=0; i<10; i++){
		if(S[i]<=0){
			S[i]=S[i]-S[i]-S[i];
			tem[i]=1;
			}
		}
	
	//순서대로 배열, 바꿀 때 tem값도 바꿈 
	for(a=0; a<10; a++){
		for(i=0; i<9; i++){
			if(S[i]>S[i+1]){
				temp=S[i];
				S[i]=S[i+1];
				S[i+1]=temp;
				
				temp=tem[i];
				tem[i]=tem[i+1];
				tem[i+1]=temp; 
			}
		}
		}
		
	printf("입력한 정수와 가장 가까운 값: %d", last(S[0], tem[0], x) );

}

int main(){
	int D[10];
	int i,A;

	while(1){
		printf("양의 정수를 하나 입력해주세요.\n");
		scanf("%d",&A);
		if(A<0){
			printf("음의 정수는 입력하실 수 없습니다.\n");
			printf("다시 입력해주세요.\n\n");
		}
		else if(A>=0){
			printf("정상 입력 확인 완료\n\n\n");
			break;
		}
	}

		printf("배열 숫자 입력을 시작합니다.\n\n");
		
	for(i=0; i<10; i++){
		
		while(1){
			printf("%d번째 숫자를 입력하세요.\n", i+1);
			scanf("%d", &D[i]);
			if(D[i]<=0){
				printf("음의 정수와 0은 입력하실 수 없습니다.\n");
				printf("다시 입력해주세요.\n\n");
			}
			else if(D[i]>=0){
				printf("정상 입력 확인 완료\n\n\n");
				break;
			}
		}		
	}
	printf("10개의 정수 모두 입력 완료\n\n");
	
	printf("10개의 숫자 중 처음에 입력한 정수와 가장 가까운 값을 출력합니다.\n");
	NEAR(D, A);
}
