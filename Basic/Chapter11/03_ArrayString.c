#include <stdio.h>

int main3(void)
{
	char str[] = "good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';	// �迭 str�� ����� ���ڿ� �����ʹ� ���� ����
	printf("���ڿ� ���: %s \n", str);	// while���� �̿��Ͽ� �ϳ��� ��´�(null�� ����������)
	
	return 0;
}


// ���ڿ��� ���� �� ���ڶ� �Ҹ��� \0�� ���ԵǾ����� �ָ�!
// �� ���ڴ� ���ڿ��� ���� �ǹ��Ѵ�.