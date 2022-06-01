#include<stdio.h>

int main(void) 
{
	FILE* fp = NULL;
	errno_t err;
	char buffer[100];

	err = fopen(&fp, "sample.txt", "wt");
	if (err == 0) {
		fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
		fclose(fp);
	}
	err = fopen(&fp, "sample.txt", "rt");
	if (err == 0) {
		fseek(fp, 10, SEEK_SET);
		printf("fseek(fp, 10, SEEK_SET)= %c \n", fgetc(fp));
		fseek(fp, -3, SEEK_CUR);
		printf("fseek(fp, -3, SEEK_CUR)= %c \n", fgetc(fp));
		fclose(fp);
		return 0;
	}
}
