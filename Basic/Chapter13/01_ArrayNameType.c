#include <stdio.h>

int main1(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("�迭�� �̸�: %p \n", arr);		// 1. �迭�� �̸��� ù ��° ��Ұ� ����.
	printf("ù ��° ���: %p \n", &arr[0]);	// 2. �� ��� ���� ���� 4(byte)��.
	printf("�� ��° ���: %p \n", &arr[1]);
	printf("�� ��° ���: %p \n", &arr[2]);

	// arr = &arr[i];	// �� ������ ������ ������ ����Ų��.
	return 0;

}