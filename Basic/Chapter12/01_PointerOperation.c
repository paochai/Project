#include <stdio.h>

int main1(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	
	pnum = &num1;	// 포인터 pnum이 num1을 가리킴
	(*pnum) += 30;	// num1 += 30; 과 동일

	pnum = &num2;	// 포인터 pnum이 num2를 가리킴
	(*pnum) -= 30;	// num2 -= 30; 과 동일

	printf("num1:%d, num2: %d \n", num1, num2);



	double* pnum2 = &num1; 
	printf("num1:%d \n", *pnum2);

	double num3 = 5;	// 8바이트가 4바이트로 넘어오면서 잘린 것.
	int* pnum3 = &num3;
	printf("num1:%d \n", *pnum3);

	printf("int형 포인터변수 크기 : %d \n", sizeof(pnum3));
	printf("double형 포인터변수 크기 : %d \n", sizeof(pnum2));

	return 0;
}


//int* ptr = 0;
//float      null;
//
//int num = 0;
//int* pnum = 0;
//
//pnum = &num;
//*pnum = num;