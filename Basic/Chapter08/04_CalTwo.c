#include <stdio.h>

int main4(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)	// ���� ����� ���� ����� ���� ���� �ø��°� ����.
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
		printf("�߸��� �Է��Դϴ�.");

	printf("���: %f \n", result);

	return 0;
}