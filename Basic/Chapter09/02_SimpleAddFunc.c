#include <stdio.h>

int Add2(int num1, int num2)
{
	return num1 + num2;
}

int main2()
{
	int result;
	result = Add2(3, 4);
	printf("�������1: %d \n", result);
	
	result = Add2(5, 8);
	printf("�������2: %d \n", result);
	return 0;
}
