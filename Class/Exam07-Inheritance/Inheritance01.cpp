#include <iostream>

using namespace std;

class Food1
{
public:

	void printf1()
	{
		cout << "�θ�Ŭ����(���Ŭ����) ����Ʈ : " << std::endl;

	}
};
class Fruit1 : public Food1
{
public:
	void printf2()
	{
		cout << "�ڽ�Ŭ����(�Ļ�Ŭ����) ����Ʈ : " << std::endl;
	}

};

int main1()
{
	Fruit1 myFruit;

	// �θ� Ŭ������ ��� �Լ� ȣ��
	myFruit.printf1();

	// ���� Ŭ������ ��� �Լ� ȣ��
	myFruit.printf2();

	return 0;
}