#include <stdio.h>

void Add8(int val);
int num;	// ���������� �⺻ 0���� �ʱ�ȭ��

int main8(void)
{
	printf("num: %d \n", num);
	Add8(3);
	printf("num: %d \n", num);
	num++;	// �������� num�� �� 1 ����
	printf("num: %d \n", num);
	return 0;
}

void Add8(int val)
{
	num += val;	// �������� num�� �� val��ŭ ����
}