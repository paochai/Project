#include <stdio.h>
// #define STNUM(Y, S, P) YSP
// #define STNUM(Y, S, P) Y S P

#define STNUM(Y, S, P)	((Y)*100000+(S)*1000+(P))

int main10(void)
{
	printf("�й�: %d \n", STNUM(10, 65, 175));
	printf("�й�: %d \n", STNUM(10, 65, 075));	// �������� ���� 1065075�� ġȯ�� �̷����� �ʾ�����
	// �� �� �ִ�. �̴� 075�� 8������ �ؼ��� ����̴�. ���� �� ��쿡�� ������ ���� ������ �����ؾ� �Ѵ�.
	//printf("�й�; %d \n", STNUM(10, 65, 75));


	return 0;
}

// �ʿ��� ���´�� �ܼ� ���� : ## ������
// #define STNUM(Y, S, P)  Y ## S ## P