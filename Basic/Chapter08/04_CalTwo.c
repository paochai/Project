#include <stdio.h>

int main4(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셉 4.나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)	// 가장 빈번히 나올 결과를 가장 위에 올리는게 좋다.
	{
		result = num1 + num2;
	}

	else if (opt == 2)
	{
		result = num1 - num2;
	}

	else if (opt == 3)
	{
		result = num1 * num2;
	}

	else if (opt == 4)
	{
		result = num1 / num2;
	}
	else
		printf("잘못된 입력입니다.");

	printf("결과: %f \n", result);

	return 0;
}