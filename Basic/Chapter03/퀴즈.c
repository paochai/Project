#include <stdio.h>
//����1

int main14_1(void)
{
	int num1, num2;
	int result1, result2, result3, result4;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	result1 = num1 + num2;
	printf("%d�� %d�� ���� %d\n", num1, num2, result1);
	
	result2 = num1 - num2;
	printf("%d�� %d�� ���� %d\n", num1, num2, result2);

	result3 = num1*num2;
	printf("%d�� %d�� ���� %d\n", num1, num2, result3);
	
	result4 = num1 / num2;
	printf("%d�� %d�� ���� ���� %d\n", num1, num2, result4);
	
	return 0;
		
}

//����2

int main14_2(void)
{
	int num1;
	int result;
	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf("%d", &num1);
	result = num1*num1;
	printf("%d�� ������ %d \n", num1, result);
	
	return 0;
		
	
}

//����3

int main14_3(void)
{
	int num1, num2;
	int result1, result2;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	result1 = num1 / num2;
	
	printf("%d ������ %d�� ���� %d\n", num1, num2, result1);

	result2 = num1 % num2;
	printf("%d ������ %d�� �������� %d\n", num1, num2, result2);

	return 0;

}