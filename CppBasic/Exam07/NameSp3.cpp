#include <iostream>

namespace my31
{
	void SimpleFunc(void);	// ����� �̸������� �̸��� �����ϴٸ�, �� ���� ������ �̸���������
}							// �����Ѵ�. ��, SimpleFunc�� PrettyFunc�� ������ �̸� �����ȿ� ����
							// �ϴ� ��Ȳ�̴�.
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
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();		// ���� �̸�����
	my32::SimpleFunc();	// �ٸ� �̸�����
}

void my31::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void my32::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
