#include <stdio.h>

int main1(void)
{
	int ch1, ch2;

	ch1 = getchar();	// ���� �Է�
	ch2 = fgetc(stdin);		// ���� Ű �Է�

	putchar(ch1);		// ���� ���
	fputc(ch2, stdout);		// ���� Ű ���
	
	return 0;
}


//putchar �Լ��� ���ڷ� ���޵� ���ڸ� ����Ϳ� ����Ѵ�.
//fputc : fput �Լ��� �� ��° ���ڸ� ���ؼ� ����� ����� �����Ѵ�.

//getchar : Ű����� �Էµ� ������ ������ ��ȯ�Ѵ�.
//fgetc : ���ڸ� �Է� ���� ��������� ���ڷ� �����Ѵ�