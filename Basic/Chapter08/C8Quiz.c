#include <stdio.h>

//문제1

int main1_1(void)
{
	int num;
	printf("시작");

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
		{
			printf("%d ", num);		// 63의 경우 7과 9의 공배수이기 때문에 7의 배수를 찾는 앞 조건문에 의해
		}							// 이미 참으로 처리되어 9의 배수 여부를 처리하지 않고 참으로 출력된다.
	}								// 따라서 continue는 넣을 필요가 없다.
	printf("end! \n");
	return 0;
}

// 1. 1 <= x < 100
// 2. 7의 배수 or 9의 배수
// 3. 7의 배수 and 9의 배수

//for( n = 1; n < 100; n++)



//문제2

int main1_2(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("차를 구할 두 정수를 입력하세요.: ");
	scanf("%d %d", &num1, &num2);
	if ((num1 - num2) >= 0)
	{
		printf("%d와 %d의 차는 %d이다 \n", num1, num2, num1 - num2);
	}

	else if ((num1 - num2) < 0)
	{
		printf("%d와 %d의 차는 %d이다 \n", num1, num2, (num1 - num2)*(-1));
	}

	return 0;
}




//문제3

int main1_3(void)
{
	int num1, num2, num3;

	printf("국어, 영어, 수학 과목의 점수를 차례대로 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("평균: %d \n", (num1 + num2 + num3) / 3);

	if ((num1 + num2 + num3) / 3 >= 90)
	{
		printf("A \n");
	}

	else if ((num1 + num2 + num3) / 3 >= 80)
	{
		printf("B \n");
	}
	else if ((num1 + num2 + num3) / 3 >= 70)
	{
		printf("C \n");
	}
	else if ((num1 + num2 + num3) / 3 >= 50)
	{
		printf("D \n");
	}
	else
	{
		printf("F \n");
	}
	return 0;
}	


//문제4

#include <stdio.h>

int main1_4(void)
{



	for (int dan = 2; dan < 9; dan++)
	{
		if (dan % 2 == 0)
		{

			for (int i = 2; i <= dan; i++)
			{
				if (i % 2 == 0)
				{
					printf("%dx%d=%d \t", dan, i, dan * i);
					printf("\n\n");
				}

			}

		}
	}

	return 0;

}






//문제5
int main1_5(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	printf("합을 구할 5개의 정수를 입력하세요.: ");
	scanf("%d", &num1);
	if (num1 < 1)


		return 0;
}

//문제6

int main1_6(void)
{
	int num = 1;
	int total = 0;
	do
	{
		if (num % 2 == 0)
		{
			total = total + num;
		}
		num++;
	} while (num < 101);

	printf("1부터 100까지 짝수의 총합: %d \n", total);

	return 0;
}

//문제7

int main1_7(void)
{
	int total = 0;
	//int total = 0;
	int num1, num2;
	printf("두 개의 정수를 입력: ");
	scanf("%d %d", &num1, &num2);
	
	if (num1 >= num2)
	{
		do
		{
			printf("%d+", num1);
			total = total + num1;
			num1--;
		} while (num1 >= num2);
	}
	

	else if (num2 > num1)
	{
		do
		{
			printf("%d+", num1);
			total = total + num1;
			num1++;
		} while (num1 <= num2);	// while()괄호 안의 조건을 만족하는 do를 돌린다.
	
	
	}

	printf("\b=%d", total);	// 한 칸 앞의 커서를 지운다.
	
	return 0;
}

//num1 <= num2일 때,
//int num1 = 2;
//int num2 = 6;
//	for ( n = num1; n <= num2; n++)
//	{
//		printf("%d+", n);
//	}
//
//	int n;
//	int input1; <-scanf
//	int input2; <-scanf
//	int n1;
//	int n2;
//
//	if(input1 <= input2)
//	{
//		n1 = input1;
//		n2 = input2;
//	}



//문제8

int main1_8(void)
{
	int num1;
	int num2;
	int result;
	

	for(num1=1; num1 < 10; num1++)
	{

			for(num2=9; num2 > 0; num2--)
			{
				if(num1 + num2 == 9)
				{
					result = num1 + num2;
					printf("%d + %d = %d \n", num1, num2, result);

				}

			}

	}
	return 0;
}