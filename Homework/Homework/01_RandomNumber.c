#include <stdio.h>
#include <stdlib.h>		// srand(), rand()
#include <time.h>		// time()

int main1()
{

	int num;

	printf("%d \n", (int)time(NULL));

	srand((int)time(NULL));		// random초기화는 변수가 몇개여도 한번만 쓰면 된다.

	num = rand() % 10;			// random값 (0~42억개의 숫자가 지정된다.)
	printf("생성된 숫자 : %d \n", num);


	return 0;
}

//위 코드를 참고로 다음 문제를 풉니다.
//랜덤한 세자리 수를 표시합니다.
//
//단 100의 자리와 수와 10의 자리의 수 1의 자리의 수는 같아서는 안됩니다.
//
//Ex )
//101 등 안됨 : 1이 두개임
//777 등 안됨 : 7이 세개임
//224 등 안됨 : 2가 두개임
//233 등 안됨 : 3이 두개임



int main1_1()
{
	int num1, num2, num3;
	srand((int)time(NULL));

	do
	{
		num1 = rand() % 9 + 1;
		num2 = rand() % 10;
		num3 = rand() % 10;

	} while (num1 == num2 || num2 == num3 || num1 == num3);
	
	printf("%d%d%d 등,", num1, num2, num3);

	return 0;
}