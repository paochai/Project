#include <iostream>

int Adder1(int num1 = 1, int num2 = 2);

int main6(void)
{
	std::cout << Adder1() << std::endl;
	std::cout << Adder1(5) << std::endl;
	std::cout << Adder1(3, 5) << std::endl;

	return 0;
}

int Adder1(int num1, int num2)
{
	return num1 + num2;
}

/*
������ ������ ���ڸ��� ���� ������ ����ǰ�,
���� ���޵��� ���� ���ڴ� ����Ʈ ���� ����ȴ�.

����Ʈ ���� �Լ��� ���� �κп��� ǥ���ϸ� �ȴ�.
*/