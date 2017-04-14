#include <stdio.h>

int main1(void)
{
	int num = 0;
	
	while(num < 5)	//while: 괄호 안의 조건이 충족되는 한 연산 반복
	{
		printf("Hello world! %d \n", num);
		num++;
	}
	
	return 0;
}	