#include <stdio.h>

//문제 1

int main8_1(void)
{
	int input = 0;
	int total = 0;

	do
	{
		printf("정수값을 입력하세요.(0 입력시 종료): ");
		scanf("%d", &input);
		total = total + input;
	} while (input != 0);

	printf("입력한 정수들의 합은 %d 입니다.: ", total);

	return 0;
}



//문제 2

int main8_2(void)
{
	double total = 0.0;
	int input = 0;
	int num;
	int i = 0;
	
	printf("입력할 정수의 개수를 양의 정수로 입력하세요.: ");
	scanf("%d", &num);

	
	for (i; i<num; i++)
	{
		printf("정수 입력: ");
		scanf("%d", &input);
		total = total + input;
	}
	printf("평균: %f \n", (total / num));

	return 0;
}


//문제3


int main8_3(void)
{
	int cur;
	int is = 9;

	printf("구구단을 출력할 정수를 입력하세요.: ");
	scanf("%d", &cur);

	while(is > 0)	
	{
		printf("%d×%d=%d \n", cur, is, cur*is);
		is--;
	}

	return 0;
}



//문제4


int main8_4(void)
{
	int total = 1;
	int num;
	printf("정수를 입력하면 팩토리얼 함수값의 결과가 출력됩니다: ");
	scanf("%d", &num);

	
	while(num > 0)
	{
		printf("%d ", num);
		total = total * num;
		num--;
		if (num != 0)
		{
			printf("* ");
		}
	}
	
	printf("= %d \n", total);

	return 0;
}


//문제5

int main8_5(void)
{
	int total = 0, num = 1;
	do
	{
		printf("%d", num);
		total = total + num;
		num++;
		if (num < 1001)
		{
			printf("+");
		}
	} while (num < 1001 );
	printf("= %d \n", total);

	return 0;
}


//문제6

int main8_6(void)
{
	int cur, is;
	
	printf("가로\n");
	for (is = 1; is < 10; is++)
	{
		
		for (cur = 2; cur < 10; cur++)
		{
		    
			printf("%dx%d=%d \t", cur, is, cur*is);
		}
		printf("\n");
	}
	
	printf("\n");

	printf("세로\n");
	for (cur = 2; cur < 10; cur++)
	{
		
		for (is = 1; is < 10; is++)
		{

			printf("%dx%d=%d \t", cur, is, cur*is);
	
		}
		printf("\n\n\n");
	}
	
	
	return 0;

}