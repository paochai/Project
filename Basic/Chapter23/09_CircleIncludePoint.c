#include <stdio.h>

typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
} SBox;	// 공용체 변수를 이루는 멤버의 시작 주소 값이 모두 동일함을 관찰하고 공용체 변수의 크기 값을 관찰한다.

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main9(void)
{
	SBox sbx;
	UBox ubx;

	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);

	printf("%d %d \n", sizeof(SBox), sizeof(UBox));

	return 0;
}