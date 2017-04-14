#include <iostream>

using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];	// ������ ID
	int fuelGauge;			// ���ᷮ
	int curSpeed;			// ����ӵ�

	void ShowCarState();
	void Accel();
	void Break();

};
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


int main3(void)
{
	cout << "Exam03 :" << endl;

	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}


/*
�Լ��� ���������� ����ü �ȿ� �ΰ�, �Լ��� ���Ǹ� ����ü ������ ���� ���

����ü �ȿ� �Լ��� ���ǵǾ� ������, ������ �ǹ̰� ���Ҿ� �����ȴ�.
- �Լ��� �ζ������� ó���ض�.
�ݸ�, �Լ��� ����ü ������ ������, �̷��� �ǹ̰� �������.
���� �ζ����� �ǹ̸� �״�� �����Ϸ��� Ű���� inline�� �̿��ؼ� �ζ��� ó����
�������
�� �����ؾ� �Ѵ�.
*/