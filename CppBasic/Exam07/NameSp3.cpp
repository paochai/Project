#include <iostream>

namespace my31
{
	void SimpleFunc(void);	// 선언된 이름공간의 이름이 동일하다면, 이 둘은 동일한 이름공간으로
}							// 간주한다. 즉, SimpleFunc와 PrettyFunc는 동일한 이름 공간안에 존재
							// 하는 상황이다.
namespace my31
{
	void PrettyFunc(void);
}

namespace my32
{
	void SimpleFunc(void);
}

int main3(void)
{
	my31::SimpleFunc();

	return 0;
}

void my31::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();		// 동일 이름공간
	my32::SimpleFunc();	// 다른 이름공간
}

void my31::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void my32::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
