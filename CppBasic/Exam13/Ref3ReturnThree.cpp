#include <iostream>

using namespace std;

// �����ڰ� �����ϴ� ������ ���� ��ȯ�ȴ�.

int RefRetFuncTwo3(int &ref)
{
	ref++;
	return ref;
}

int main3(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo3(num1);
	// int &num2 = RefRetFuncTwo3(num1);		// ��ȯ���� ���̹Ƿ� �Ұ���

	num1 += 1;
	num2 += 100;
	
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}