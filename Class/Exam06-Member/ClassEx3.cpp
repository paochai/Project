// ����Լ� ȣ��

#include <iostream>

using namespace std;

class OrangeBox3
{
private:

	int total;

public:

	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal()
	{
		return total;
	}
};

void OrangeBox3::Add(int num)
{
	total += num;
}

void OrangeBox3::Del(int num)
{
	total -= num;
	if (total < 0)
	{
		Empty();		// ���� ������Ʈ ���� ��� �Լ� ȣ���ϱ�
	}
}

void OrangeBox3::Empty()
{
	total = 0;
}

int main3()
{
	// ���� ��ü ����
	OrangeBox3 obox;
	// obox::Empty()
	obox.Empty();
	obox.Add(5);
	obox.Del(4);
	int nResult = obox.GetTotal();
	cout << nResult << endl;

	OrangeBox3 * obox2 = new OrangeBox3;
	(*obox2).Empty();
	obox2->Add(2);
	delete obox2;

	return 0;
}