#include <iostream>

using namespace std;

class Food7
{
public:

	virtual void print(int n) = 0;	// ���� ���� �Լ�
};

class Fruit7 : public Food7
{
public:
	// ���� ���� �Լ��� ������(Overriding)
	void print(int n)
	{
		cout << (n + 100) << endl;
	}
};

class Fish7 : public Food7
{
public:
	// ���� ���� �Լ��� ������(Overriding)
	void print(int n)
	{
		cout << (n + 200) << endl;
	}
};

int main7()
{
	Fruit7 myFruit;
	myFruit.print(5);

	Fish7 myFish;
	myFish.print(5);

	return 0;
}





// �⺻ Ŭ�������� ������ �������� �ʴ� ���� �Լ��� ���� ���� �Լ���� �Ѵ�.
//
// ���� ���� �Լ��� �Ļ� Ŭ�������� �Լ��� ������ �����Ѵ�.
// ���� ���� �Լ��� �����ϴ� Ŭ������ ������Ʈ�� ������ �� ����.
// ��, ������ �θ� �� �� �ִ�.