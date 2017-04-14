#include <stdio.h>

void Add8(int val);
int num;	// 전역변수는 기본 0으로 초기화됨

int main8(void)
{
	printf("num: %d \n", num);
	Add8(3);
	printf("num: %d \n", num);
	num++;	// 전역변수 num의 값 1 증가
	printf("num: %d \n", num);
	return 0;
}

void Add8(int val)
{
	num += val;	// 전역변수 num의 값 val만큼 증가
}