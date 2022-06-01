#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
	srand(time(NULL));
	
	int random = rand();
	
	printf("%d", random);
	
	return 0;
}
