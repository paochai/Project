#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0;		// 초기화하지 않으면 0 초기화(static: 나만 쓰는 전역 변수)
	int num2 = 0;		// 초기화하지 않으면 쓰레기 값 초기화
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main11(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}