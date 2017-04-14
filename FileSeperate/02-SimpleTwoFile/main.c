#include <stdio.h>


extern void Increment(void);
extern int GetNum(void);

int main2(void)
{
	printf("num: %d \n", GetNum());
	Increment();

	Increment();
	printf("num: %d \n", GetNum());

	Increment();
	printf("num: %d \n", GetNum());

}