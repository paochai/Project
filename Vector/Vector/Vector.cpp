#include <vector>	// ���� Ŭ������ ����ϴ� �� �ʿ�.
#include <iostream>

using namespace std;

int main1()
{
	// int ���� �����ϴ� vector ������Ʈ�� ����
	vector<int> v1;

	v1.push_back(10);	// �迭 �������� �����͸� �߰�
	v1.push_back(11);

	// ����� ������ ���
	cout << "����� ���� : " << (int)v1.size() << endl;

	// �Ϲ� �迭�� �����ϰ� �����Ͽ� ������ ó��
	cout << "v1[0] = " << v1[0] << endl;
	cout << "v1[1] = " << v1[1] << endl;

	// ����Լ��� �����Ͽ� ������ ó��
	cout << "v1.at(0) = " << v1.at(0) << endl;
	cout << "v1.at(1) = " << v1.at(1) << endl;

	return 0;
}

/*
vector Ŭ������ �޸𸮰� ������ ��쿡 �ڵ����� �޸𸮸� Ȯ��
�׷��Ƿ� �迭���� �ٸ��� ����� �Ű��� �� �ʿ䰡 ����.

C++���� ���ø� Ŭ������ ����ϴ� ǥ�� ���̺귯���� �ִ�.
�̰��� ǥ�� ���ø� ���̺귯��(STL : Standard Template Library)��� �Ѵ�.
- �迭 vector Ŭ����
- ����Ʈ list Ŭ����
- ť queue Ŭ����
- ���� stack Ŭ����
*/