#include <stdio.h>

int main2(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		
		putchar(ch);
	}

	return 0;
}

//�ܼ� ����� fgetc, getchar �Լ�ȣ��� EOF�� ��ȯ�ϴ� ���
//- �Լ� ȣ���� ����
//- Windows���� Ctrl+ZŰ, Linux���� Ctrl+D Ű�� �Է��� �Ǵ� ���