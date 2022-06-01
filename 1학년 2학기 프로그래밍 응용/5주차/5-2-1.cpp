#include<stdio.h>

void print_str(const char *);

int main(){
	int i;
	const char *week_ary[] = {"Monday", "Tuesday", "Wednesday", "Thursday", 
	"Friday", "Saturday", "Sunday"};
//weak_ary 1가 가리키는 메모리(&weak_ary[0])에는 Monday, 
//weak_ary 2가 가리키는 메모리에는 Tuesday.. 
	print_str(&week_ary);
}

void print_str(int *s1){
	
	
	printf("%d", s1);
	
	
	
	
	
	
}

