#include<stdio.h>

/*정수 10개가 저장된 배열을 매개변수 S[]로 전달받아 원소 중 
2번째로 작은 값을 출력하는 함수 SNDM을 작성하시오*/ 

void SNDM(int S[10]){
	int i,a;
	int temp;
	for(a=0; a<10; a++){
		for(i=0; i<9; i++){
			if(S[i]>S[i+1]){
				temp=S[i];
				S[i]=S[i+1];
				S[i+1]=temp;
			}
		}	
		}
	
	printf("2번쨰로 작은 값: %d",S[1]);
}

int main(){
	int D[10];
	int i;
	for(i=0; i<10; i++){
		printf("%d번째 숫자를 입력하세요.\n", i+1);
		scanf("%d", &D[i]);
	}
	printf("10개의 정수 모두 입력 완료\n\n");
	printf("2번째로 작은 값을 출력합니다.\n");
	SNDM( D );
}
