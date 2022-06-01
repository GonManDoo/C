#include<stdio.h>

char str[] = "I love JAZZ!!";

int main(void){
	
	FILE*fp = NULL;
	errno_t err;
	char ch;
	int i;
	
	err = fopen_s(&fp, "test.txt", "w"); //파일을 오픈, 파일 포인터의 주소를 전달, 파일 이름은test.txt, 모드는 write 
	if(err!=0){
		printf("error: file couldn't be opened\n");
		return;
	}
	
	for(i=0; str[i]; i++){
		if(fputc(str[i], fp)==EOF){
			printf("error: file couldn't be written\n");
			return;
		}
	}
	
	fclose(fp);
	
	err=fopen_s(&fp, "test.txt", "r");
	if(err!=0){
		printf("error: file couldn't be opened\n");
		return;
	}
	
	for(;;){
		ch = fgetc(fp);
		if(ch == EOF )break;
		putchar(ch);
	}
	fclose(fp);
	 
}
