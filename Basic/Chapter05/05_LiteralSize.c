#include <stdio.h>

int main5(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));	//�Ǽ� �⺻ �������� double�� ��ȯ
	printf("literal char size: %d \n", sizeof('A'));	//A->65 ������ �Ǿ� int�� ��ȯ

	return 0;
}