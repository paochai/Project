#include <iostream>

namespace my11
{
	void SimpleFunc(void);
}

namespace my22
{
	void SimpleFunc(void);
}

int main2(void)
{
	my11::SimpleFunc();
	my22::SimpleFunc();

	return 0;
}

namespace my11
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

void my22 :: SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}