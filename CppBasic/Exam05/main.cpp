#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main5(void)
{
	// �Լ� �����ε�
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

	return 0;
}



/*
C������ ������ �̸��� �Լ��� ���ǵǴ� ���� ������� �ʴ´�.


C++������ �Լ��� �����ε��� ����Ѵ�.
- �Լ�ȣ�� �� ���޵Ǵ� ���ڸ� ���ؼ� ȣ���ϰ��� �ϴ� �Լ��� ���� ����
- ��ȯ���� �Լ�ȣ�� ��, ȣ��Ǵ� �Լ��� �����ϴ� ������ �� �� ����.

*/