#include <stdio.h>

int main3(void)
{
	char str[] = "good morning!";
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 정수형 출력: %d \n", str[13]);

	str[12] = '?';	// 배열 str에 저장된 문자열 데이터는 변경 가능
	printf("문자열 출력: %s \n", str);	// while문을 이용하여 하나씩 찍는다(null을 만날때까지)
	
	return 0;
}


// 문자열의 끝에 널 문자라 불리는 \0가 삽입되었음에 주목!
// 널 문자는 문자열의 끝을 의미한다.