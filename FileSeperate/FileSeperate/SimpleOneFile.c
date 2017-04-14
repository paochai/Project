#include <stdio.h>

int num = 0;

void Increment(void)
{
	num++;
}

int GetNum(void)
{
	return num;
}

int main1(void)
{
	printf("num: %d \n", GetNum());
	Increment();

}