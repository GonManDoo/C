#include<stdio.h>

void print_str(const char *);

int main(){
	int i;
	const char *week_ary[] = {"Monday", "Tuesday", "Wednesday", "Thursday", 
	"Friday", "Saturday", "Sunday"};
//weak_ary 1�� ����Ű�� �޸�(&weak_ary[0])���� Monday, 
//weak_ary 2�� ����Ű�� �޸𸮿��� Tuesday.. 
	print_str(&week_ary);
}

void print_str(int *s1){
	
	
	printf("%d", s1);
	
	
	
	
	
	
}

