// ���� �������� ����

#include <iostream>

using namespace std;

class Food2
{
private:

	int price1;

protected:

	int price2;

public:

	int price3;


	Food2 ()
	{
		price1 = 0;
		price2 = 0;
		price3 = 0;

	}
};


class Fruit2 : public Food2
{
public:
	
	void print1()
	{
		// �θ� �𷡽��� private ��� ������ ������ �ȵȴ�. ���ٽ� ����.
		// cout << "price1 : " << price1 << std::endl;
	}

	void print2()
	{
		cout << "price2 : " << price2 << std::endl;
	}

	void print3()
	{
		cout << "price2 : " << price3 << std::endl;
	}
};

int main2()
{
	Fruit2 myFruit;

	myFruit.print1();
	myFruit.print2();
	myFruit.print3();

	Food2 myFood;
	//int nP1 = myFood.price1;
	//int nP2 = myFood.price2;
	int nP3 = myFood.price3;
	cout << "price2 : " << nP3 << std::endl;

	return 0;

}

/*
protected�� ����ϸ� �Ļ� Ŭ���������� ������ �� �־,
�ٸ� Ŭ������ �۷ι� �Լ������� ������ �� ����.
*/