#include <iostream>

using namespace std;

int & RefRetFuncOne2(int &ref)
{
	ref++;
	return ref;
}

int main13(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne2(num1);
	// int &num2 = RefRetFuncOne1(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

// ��ȯ���� �������� ���, ��ȯ ���� �������� �����ϴ��Ŀ� ���� �� ����� ���̰� �ִ�.
// ���������� ���������� ��ȯ�ϴ� ���� ����� �Ѵ�.
// - �Լ��� ��ȯ�� �Ǹ�, ���������� �Ҹ��� �ȴ�.
// - ����� ���·� �����ִ� �����͸� �����ϰ� �ȴ�.
//   (�������� �������� ��쵵...)