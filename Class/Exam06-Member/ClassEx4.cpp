// ������Ʈ�� ������, �Ҹ���

#include<iostream>

using namespace std;

class OrangeBox4
{

public:
	// ������ : ������Ʈ�� ������ �� �ڵ������� ȣ��Ǵ� Ư���� �Լ�
	// ��ȯ���� ������, void ���� �������� �ʴ´�.

	OrangeBox4()
	{
		cout << "������Ʈ ������" << endl;
	}
	// �Ҹ��� : ������Ʈ�� ������ ������ �� �ڵ����� ȣ��Ǵ� Ư���� �Լ�
	//		  : ��ȯ���� ������, void���� �������� �ʴ´�.
	//		  : �μ��� ����.
	
	~OrangeBox4()
	{
		cout << "������Ʈ �Ҹ��" << endl;
	}
};

int main7()
{
// ���� ��ü ����, ��ȿ ������ ���� ��, �Ҹ��ڰ� ȣ��ȴ�.
	OrangeBox4 obox;

	return 0;

}

/*
// ���� ��ü ����
OrangeBox4 * obox2 = new OrangeBox4;
// ���� ��ü �Ҹ�
delete obox2;
*/