#include <stdio.h>

int main4(void)
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);	// ����Ʈ�� ������ �� ����.
	
	ch = fgetc(fp);
	printf("%c \n", ch);
	
	fgets(str, sizeof(str), fp);		// \n�� ���������� read
	printf("%s", str);

	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);

	return 0;
}