#include <stdio.h>

int main1(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	
	pnum = &num1;	// ������ pnum�� num1�� ����Ŵ
	(*pnum) += 30;	// num1 += 30; �� ����

	pnum = &num2;	// ������ pnum�� num2�� ����Ŵ
	(*pnum) -= 30;	// num2 -= 30; �� ����

	printf("num1:%d, num2: %d \n", num1, num2);



	double* pnum2 = &num1; 
	printf("num1:%d \n", *pnum2);

	double num3 = 5;	// 8����Ʈ�� 4����Ʈ�� �Ѿ���鼭 �߸� ��.
	int* pnum3 = &num3;
	printf("num1:%d \n", *pnum3);

	printf("int�� �����ͺ��� ũ�� : %d \n", sizeof(pnum3));
	printf("double�� �����ͺ��� ũ�� : %d \n", sizeof(pnum2));

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