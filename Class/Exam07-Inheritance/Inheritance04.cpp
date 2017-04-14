#include <iostream>

using namespace std;

class Food4
{
private:

	int price;

public:

	void SetPrice(int myprice)
	{
		cout << "Food4 : " << myprice << std::endl;
	}
};

class Fruit4 : public Food4
{
public:

	void SetPrice2()
	{
		cout << "Fruit4 : " << std::endl;
	}
};

class Snack4 : public Food4
{
public: 

	void SetPrice2()
	{
		cout << "Snack4 : " << std::endl;
	}
};

int main4()
{
	Food4 *pFood[2];
	Fruit4 myFruit;
	Snack4 mySnack;

	pFood[0] = &myFruit;
	pFood[1] = &mySnack;

	for(int i = 0; i <= 1; i++)
	{
		pFood[i]->SetPrice(100);
		//pFood[i]->SetPrice2();	// ���°� ȣ���� �ȵȴ�.
	}

	return 0;
}

/*
�⺻ Ŭ������ ������Ʈ�� �Ļ� Ŭ������ ������Ʈ�� ������ �� ����.
- �⺻ Ŭ������ �Ļ� Ŭ������ ������ �� �׸��� ���� �� �ִ�.
�Ļ� Ŭ���� ������Ʈ�� ��巹���� �⺻ Ŭ������ �����Ϳ� ������ �� �ִ�.
- �⺻ Ŭ������ �����͸� ����Ͽ� �Ļ� Ŭ������ ������ �Լ��� ȣ���� �� �ִ�.
*/