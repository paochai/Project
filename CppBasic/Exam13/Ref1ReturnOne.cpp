#include <iostream>

using namespace std;

int & RefRetFuncOne1(int &ref)
{
	ref++;
	return ref;
}

int main1(void)
{
	int num1 = 1;
	int &num2 = RefRetFuncOne1(num1);

	num1++;
	num2++;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

/*
���� �ּҸ� ����Ű�� �� ���� ������ ������.
int num1 = 1;
int &ref = num1;
int &num2 = ref;
*/