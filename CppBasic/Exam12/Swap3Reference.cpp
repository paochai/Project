#include<iostream>

using namespace std;

// call-by-reference

void SwapByValue2(int &ref1, int &ref2)	// ������ ��� �����ڸ� ����� ����
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main3(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByValue2(val1, val2);	// val1�� val2�� ����� ���� �ٲ�⸦ �����.

	cout << "val1: " << val1 << endl;	// 20 ���
	cout << "val2: " << val2 << endl;	// 10 ���

	return 0;
}

/*
C++������ �Լ� �ܺο� ����� ������ ���ٹ�� �� ����
- �ּ� ���� �̿��� Call-by-reference
- �����ڸ� �̿��� Call-by-reference
*/