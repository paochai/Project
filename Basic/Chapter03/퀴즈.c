#include <stdio.h>
//문제1

int main14_1(void)
{
	int num1, num2;
	int result1, result2, result3, result4;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	result1 = num1 + num2;
	printf("%d와 %d의 합은 %d\n", num1, num2, result1);
	
	result2 = num1 - num2;
	printf("%d와 %d의 차는 %d\n", num1, num2, result2);

	result3 = num1*num2;
	printf("%d와 %d의 곱은 %d\n", num1, num2, result3);
	
	result4 = num1 / num2;
	printf("%d를 %d로 나눈 값은 %d\n", num1, num2, result4);
	
	return 0;
		
}

//문제2

int main14_2(void)
{
	int num1;
	int result;
	printf("제곱 값을 구할 정수를 입력하세요 : ");
	scanf("%d", &num1);
	result = num1*num1;
	printf("%d의 제곱은 %d \n", num1, result);
	
	return 0;
		
	
}

//문제3

int main14_3(void)
{
	int num1, num2;
	int result1, result2;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	result1 = num1 / num2;
	
	printf("%d 나누기 %d의 몫은 %d\n", num1, num2, result1);

	result2 = num1 % num2;
	printf("%d 나누기 %d의 나머지는 %d\n", num1, num2, result2);

	return 0;

}