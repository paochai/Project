#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple Function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main3(void)
{
	using Hybrid::HybFunc;
	HybFunc();

	return 0;
}

/*
14���� : HybFunc�� �̸����� Hybrid���� ã����
- Ű���� using�� �̿��ؼ� '�̸����� Hybrid�� ���ǵ� HybFunc�� ȣ���� ������,
�̸������� �������� �ʰ� ȣ���ϰڴ�!'�� ���� ����ϰ� �ִ�.
�� ��, HybFunc�� �Լ��� �̸��� �� ���� �ְ�, ������ �̸��� �� �� �ִ�.
���� ��� ���������� ����� ���������� ����� ���ĺ��� ȿ���� �����ϸ�,
����� ������ �����, ��������ó�� ������ ȿ���� �Ұ� �ȴ�.
*/