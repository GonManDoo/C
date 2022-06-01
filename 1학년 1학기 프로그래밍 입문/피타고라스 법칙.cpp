#include <stdio.h>

int main(void)
{
	int a, b, c;
	int n;
	
	printf("삼각형 각 변의 길이의 최댓값 n(정수)을 입력하시오\n");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	  for(b=1; a<=n; a++)
	    for(c=1; c<=n; c++)
	      if(a*a + b*b == c*c)
	       printf("a:%d,b:%d,c:%d\n",&a,&b,&c);
	
	return 0;
}
