#include<stdio.h>
struct stype{
    int snum; /* 학번 */
    int score[8]; /* 과목별 성적 */
	};

int MASCR(struct stype stdnt[], int stnum){
	int total;
	int a, i;
	
	for(i=0; i<30; i++){
		if(stdnt[i].snum == stnum){
			total=stdnt[i].score[0];
			for(a=0; a<8; a++){
				if(stdnt[i].score[a]>total){
					total=stdnt[i].score[a];
					return total;
				}
			}
		}
		
	}
}


int BESTNT(struct stype stdnt[]){
	int top;
	int a, i;	
	int aver[30];
	int code; 
	
	//각 학생 성적의 평균값 
	for(i=0; i<30; i++){
		for(a=0; a<8; a++){
			aver[a]=aver[a]+ stdnt[i].score[a]; //각 과목 성적을 모두 더하고 
		}
		aver[a]=aver[a]/8; //나눠서 평균값을 구함 
	}
	
	//비교해서 가장 높은 값 찾기
	top=aver[0];
	for(i=0; i<30; i++){
		if(aver[i]>top){
			top=aver[i]; //가장 높은 값은 top에 저장 
			code=i; //가장 높은 아이의 순서를 code에 저장 
		}
	} 
	
	return stdnt[code].snum; //가장 높은 값을 구할 때 저장해둔 code값을 이용하여 학번 반환 
	
}


int main(void){
    int number;   
    struct stype student[30];
    printf("학번을 입력하시오.\n");
    scanf("%d", number);
    
    MASCR(struct stype student[30], number);
    
    
       
       
   }
