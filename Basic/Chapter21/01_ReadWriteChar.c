#include <stdio.h>

int main1(void)
{
	int ch1, ch2;

	ch1 = getchar();	// 문자 입력
	ch2 = fgetc(stdin);		// 엔터 키 입력

	putchar(ch1);		// 문자 출력
	fputc(ch2, stdout);		// 엔터 키 출력
	
	return 0;
}


//putchar 함수는 인자로 전달된 문자를 모니터에 출력한다.
//fputc : fput 함수의 두 번째 인자를 통해서 출력의 대상을 지정한다.

//getchar : 키보드로 입력된 문자의 정보를 반환한다.
//fgetc : 문자를 입력 받을 대상정보를 인자로 전달한다