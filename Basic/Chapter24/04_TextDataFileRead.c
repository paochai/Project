#include <stdio.h>

int main4(void)
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);	// 프린트에 개행이 들어가 있음.
	
	ch = fgetc(fp);
	printf("%c \n", ch);
	
	fgets(str, sizeof(str), fp);		// \n을 만날때까지 read
	printf("%s", str);

	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);

	return 0;
}