#include <stdio.h>

int main(void)
{
	int a, b, c, d; // a시 b분, c시 d분 
	
	printf("출발 시각(a시 b분)을 입력하세요.\n");
	printf("a시\n");
	scanf("%d", &a);
	printf("b분\n");
	scanf("%d", &b);	
	
	printf("도착 시각(c시 d분)을 입력하세요.\n");
	printf("c시\n");
	scanf("%d", &c);
	printf("d분\n");
	scanf("%d", &d);
	
	printf("%d %d %d %d", a, b, c, d);

    return 0;
 } 
