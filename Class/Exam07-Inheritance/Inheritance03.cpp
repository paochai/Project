#include <iostream>

using namespace std;

class Phone
{
public:

	void power()
	{
		cout << "Phone : called" << std::endl;
	}
};

class Printer
{
public:

	void power()
	{
		cout << "Printer : called" << std::endl;
	}
};

class Fax : public Phone, public Printer
{
public:

	void power()
	{
		cout << "Fax : called" << std::endl;
	}
};

int main3()
{
	Fax myFax;

	// ���ӽ����̽��� �̿��Ͽ� �θ�Ŭ������ ��� �Լ��� ȣ��
	myFax.Phone::power();
	myFax.Printer::power();
	myFax.power();

	return 0;
}

// ���� ��ӽ� ������ �⺻ Ŭ������ ���ǵ� ���� �̸��� ��� �Լ� ȣ��