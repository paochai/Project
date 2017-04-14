CH09.함수

문제1
세 개의 정수를 인자로 전달 받아서 그중 가장 큰수와 가장 작은수를 반환하는 함수를 정의하라.

문제2
섭씨(Celsius)를 입력받아서 화씨(Fahrenheit)로 변환하여 리턴하는 함수와
화씨를 입력받아서 섭씨로 변환하여 리턴하는 함수를 만들어라.
화씨 = 1.8 * 섭씨 + 32
섭씨 = (화씨 - 32) / 1.8

#include <stdio.h>

//문제1


int Compare1(int n1, int n2, int n3);
int Compare2(int n1, int n2, int n3);


int main14_1(void)
{
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("세 정수 중 가장 큰 정수: %d, 세 정수 중 가장 작은 정수: %d\n", Compare1(num1, num2, num3), Compare2(num1, num2, num3));


	return 0;

}


int Compare1(int n1, int n2, int n3)
{
	if (n1 > n2 && n1 > n3)
	{
		return n1;
	}

	else if (n2 > n1 && n2 > n3)
	{
		return n2;

	}
	else if (n3 > n1 && n3 > n2)
	{
		return n3;
	}
}


int Compare2(int n1, int n2, int n3)
{
	if (n1 < n2 && n1 < n3)
	{
		return n1;
	}

	else if (n2 < n1 && n2 < n3)
	{
		return n2;

	}
	else if (n3 < n1 && n3 < n2)
	{
		return n3;
	}
}


//문제2

float Sup(int n1);
float Hwa(int n2);

float i1, i2;

int main14_2(void)
{
	while (1)
	{

		printf("섭씨->화씨로 변환할 온도를 입력하세요.");
		scanf("%f", &i1);
		printf("화씨 %.2f\n", Sup(i1));

		printf("화씨->섭씨로 변환할 온도를 입력하세요.");
		scanf("%f", &i2);
		printf("섭씨 %.2f\n", Hwa(i2));
	}

	return 0;
}


float Sup(int n1)
{
	n1 = (1.8 * i1) + 32;
	return n1;
}

float Hwa(int n2)
{
	n2 = (i2 - 32) / 1.8;
	return n2;
}