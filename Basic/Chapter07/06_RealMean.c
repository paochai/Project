#include <stdio.h>

int main6(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0; )
	{
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}

	printf("���: %f \n", total / (num - 1));

	return 0;
}