CH09.�Լ�

����1
�� ���� ������ ���ڷ� ���� �޾Ƽ� ���� ���� ū���� ���� �������� ��ȯ�ϴ� �Լ��� �����϶�.

����2
����(Celsius)�� �Է¹޾Ƽ� ȭ��(Fahrenheit)�� ��ȯ�Ͽ� �����ϴ� �Լ���
ȭ���� �Է¹޾Ƽ� ������ ��ȯ�Ͽ� �����ϴ� �Լ��� ������.
ȭ�� = 1.8 * ���� + 32
���� = (ȭ�� - 32) / 1.8

#include <stdio.h>

//����1


int Compare1(int n1, int n2, int n3);
int Compare2(int n1, int n2, int n3);


int main14_1(void)
{
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� �� ���� ū ����: %d, �� ���� �� ���� ���� ����: %d\n", Compare1(num1, num2, num3), Compare2(num1, num2, num3));


	return 0;

}


int Compare1(int n1, int n2, int n3)
{
	if (n1 > n2 && n1 > n3)
	{
		return n1;
	}

	else if (n2 > n1 && n2 > n3)
	{
		return n2;

	}
	else if (n3 > n1 && n3 > n2)
	{
		return n3;
	}
}


int Compare2(int n1, int n2, int n3)
{
	if (n1 < n2 && n1 < n3)
	{
		return n1;
	}

	else if (n2 < n1 && n2 < n3)
	{
		return n2;

	}
	else if (n3 < n1 && n3 < n2)
	{
		return n3;
	}
}


//����2

float Sup(int n1);
float Hwa(int n2);

float i1, i2;

int main14_2(void)
{
	while (1)
	{

		printf("����->ȭ���� ��ȯ�� �µ��� �Է��ϼ���.");
		scanf("%f", &i1);
		printf("ȭ�� %.2f\n", Sup(i1));

		printf("ȭ��->������ ��ȯ�� �µ��� �Է��ϼ���.");
		scanf("%f", &i2);
		printf("���� %.2f\n", Hwa(i2));
	}

	return 0;
}


float Sup(int n1)
{
	n1 = (1.8 * i1) + 32;
	return n1;
}

float Hwa(int n2)
{
	n2 = (i2 - 32) / 1.8;
	return n2;
}