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

//콘솔 대상의 fgetc, getchar 함수호출로 EOF를 반환하는 경우
//- 함수 호출의 실패
//- Windows에서 Ctrl+Z키, Linux에서 Ctrl+D 키가 입력이 되는 경우