#include <iostream>
#include "Car.h"

using namespace std;

int main5(void)
{
	cout << "Exam05 :" << endl;

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
C++�� Ŭ���� ���� ������ϰ� �ҽ������� �����ؼ� Ŭ������ ����� ���Ǹ� �и��ؼ� ����Ѵ�.#
- Ŭ������ ����(.h) - declaration
- Ŭ������ ����(.cpp) - definition

�ζ��� �Լ��� ������Ͽ� �Բ� �־�� �Ѵ�.
*/