#include <stdio.h>

int main3(void)
{
	char* str = "Simple String";

	printf("1. puts test ------ \n");	// 인자로 전달되는 문자열을 출력한다. 단 fputs 함수는
	puts(str);							// 두 번째 인자를 통해서 출력의 대상을 지정할 수 있다.
	puts("So Simple String");

	printf("2. fputs test ------ \n");
	fputs(str, stdout);
	printf("\n");
	fputs("So Simple String", stdout);
	printf("\n");

	printf("3. end of main ---- \n");

	return 0;

}


//puts 함수가 호출되면 문자열 출력 후 자동으로 개행이 이뤄지지만,
//fputs 함수가 호출되면 문자열 출력 후 자동으로 개행이 이뤄지지 않는다.


//const -> 데이터를 읽기 전용으로 안전하게 받기 위해 선언