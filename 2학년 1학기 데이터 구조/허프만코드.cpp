#include<stdio.h>

int main(void){
	int i; 
	int A=0;
	int B=0;
	int C=0;
	int D=0;
	char temp[30]={'C','D','D','C','A','C','B','C','B','C','C','C','B','B','C','D','A'};
	
	for(i=0; i<30; i++){
		if(temp[i]=='A'){
			A++;
		}
		else if(temp[i]=='B'){
			B++;
		}
		else if(temp[i]=='C'){
			C++;
		}
		else if(temp[i]=='D'){
			D++;
		}
		
	}
	
	
	printf("A: %d개\nB: %d개\nC: %d개\nD: %d개\n", A, B, C, D);
	
}
