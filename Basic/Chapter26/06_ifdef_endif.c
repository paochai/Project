#include <stdio.h>
//#define ADD  1
#define MIN  0

int main6(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD		// ADD가 '참'이라면
	printf("%d + %d = %d", num1, num2, num1 + num2);	// ADD가 정의되었다면 ~endif까지 컴파일 대상에 포함
#endif

#ifdef MIN		// MIN이 '참'이라면
	printf("%d - %d = %d", num1, num2, num1 - num2);	// MIN이 정의되었다면 ~endif까지 컴파일 대상에 포함
#endif

	return 0;
}