#include <stdio.h>

int main2(void)
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);		// fp�κ��� �ϳ��� ���ڸ� �о ���� ch�� �����ض�.
		printf("%c \n", ch);
	}

	fclose(fp);

	return 0;
}

// ������ ���ڰ� ���� ������� ������