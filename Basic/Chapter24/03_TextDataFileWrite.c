#include <stdio.h>

int main3(void)
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);	// ���� A�� B�� fp�� ����Ű�� ���Ͽ� ����
	fputc('B', fp);
	fputs("My name is Hong \n", fp);	// �� ���� ���ڿ��� fp�� ����Ű�� ���Ͽ� ����
	fputs("Your name is Yoon \n", fp);
	fclose(fp);

	return 0;
}

// ���⿡�� fputc�� �ޱ� ������ ������ ���� ������, �б⿡�� \n�� �־��� ������ ���� �޸��� �ؽ�Ʈ�ʹ� �ٸ��� ���δ�.