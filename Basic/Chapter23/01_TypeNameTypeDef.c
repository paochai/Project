#include<stdio.h>


typedef int INT;		// typedef 선언으로 인해 자료형의 이름 int에 INT라는 이름을 추가로 붙여준다.
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UINT;
	
typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main1(void)
{
	INT num1 = 120;				// int num1 = 120;
	PTR_INT pnum1 = &num1;		// int* pnum1 = &num1;

	UINT num2 = 190;			// unsigned int num2 = 190;
	PTR_UINT pnum2 = &num2;		// unsigned int* pnum2 = &num2;

	UCHAR ch = 'Z';				// unsigned char ch = 'Z';
	PTR_UCHAR pch = &ch;		// unsigned char* pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
	
	return 0;
}