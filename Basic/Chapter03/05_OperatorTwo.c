#include <stdio.h>
int main5(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;	// num1 = num1 + 3;
	num2 *= 4;  // num2 = num2 * 4;
	num3 %= 5;	// num3 = num3 % 5;
	printf("Rsult: %d, %d, %d \n", num1, num2, num3);
	return 0;
}