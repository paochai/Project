#include <stdio.h>

int Add9(int val);
int num = 1;

int main9(void)
{
	int num = 5;
	printf("num: %d \n", Add9(3));
	printf("num: %d \n", num + 9);
	return 0;
}

int Add9(int val)
{
	int num = 9;
	num += val;
	return num;
}