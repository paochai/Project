#include <iostream>

int main4(void)
{
	char name[100];		// ���ڿ��� �Է� ��ĵ�
	char lang[200];
	
	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;	// �ٸ� �������� �Է¹�İ� ū ���̰� ���� �ʴ´�.

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;

	return 0;
}