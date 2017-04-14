#include <iostream>
#include <cstring>

using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

class Car
{
	// public : ��𼭵� ���� ����
	// protected : ��Ӱ��迡 �������� ��, �Ļ� Ŭ���������� ���� ���
	// private : Ŭ���� �������� ���� ��� (default)

private:

	char gamerID[ID_LEN];	// ������ ID
	int fuelGauge;			// ���ᷮ
	int curSpeed;			// ����ӵ�

public:

	void InitMembers(char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};

void Car::InitMembers(char * ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}


void Car::ShowCarState()
{
	cout << "������ ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
	{
		return;
	}

	else
	{
		fuelGauge -= FUEL_STEP;
	}

	if (curSpeed + ACC_STEP >= MAX_SPD)
	{
		curSpeed = MAX_SPD;
		return;
	}

	curSpeed += ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= BRK_STEP;
}


int main4(void)
{
	cout << "Exam04 :" << endl;

	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();


	return 0;
}

/*
Ű���� struct�� ����ؼ� class�� ����ϸ�, ����ü�� �ƴ� Ŭ������ �ȴ�.

Ű���� class�� �̿��ؼ� ������ Ŭ������ ����� ������ �Լ��� ������ ��������
�����ڸ� �������� ������, ��� ������ �Լ��� private�� ����ȴ�.

Ű���� struct�� �̿��ؼ� ������ ����ü�� ����� ������ �Լ��� ������ ��������
�����ڸ� �������� ������, ��� ������ �Լ��� public���� ����ȴ�.
- C����� ����ü���� ������ �����ϴ� ��ġ�� ����.
*/