#include <stdio.h>

int main5(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));	//실수 기본 연산자인 double로 전환
	printf("literal char size: %d \n", sizeof('A'));	//A->65 연산이 되어 int로 전환

	return 0;
}