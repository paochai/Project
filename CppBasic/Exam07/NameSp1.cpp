#include <iostream>

namespace my1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace my2
{
	void SimpleFunc(void)
	{
		std::cout << "PorgCom�� ������ �Լ�" << std::endl;
	}
}

int main1(void)
{
	my1::SimpleFunc();
	my2::SimpleFunc();

	return 0;
}

/*
������ :: �� ������ '�������� ������(scope resolution operator)'�� �ϸ�,
�� �̸��� �ǹ��ϵ��� �̸������� ������ �� ����ϴ� �������̴�.
*/