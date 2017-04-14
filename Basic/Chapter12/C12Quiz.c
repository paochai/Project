#include <stdio.h>

// 문제1

int main2_1(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);

	return 0;
}

num = 12;


// 문제2

int main2_2(void)
{

	int num1 = 10;
	int num2 = 20;
	int* ptr1;
	int* ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	printf("num1: %d, num2: %d\n", num1, num2);


	ptr1 = &num2;
	ptr2 = &num1;

	(*ptr1) += 15;
	(*ptr2) += 15;

	printf("num1: %d, num2: %d\n", num2, num1);

	return 0;
}