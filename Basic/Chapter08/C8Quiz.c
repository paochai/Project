#include <stdio.h>

//����1

int main1_1(void)
{
	int num;
	printf("����");

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
		{
			printf("%d ", num);		// 63�� ��� 7�� 9�� ������̱� ������ 7�� ����� ã�� �� ���ǹ��� ����
		}							// �̹� ������ ó���Ǿ� 9�� ��� ���θ� ó������ �ʰ� ������ ��µȴ�.
	}								// ���� continue�� ���� �ʿ䰡 ����.
	printf("end! \n");
	return 0;
}

// 1. 1 <= x < 100
// 2. 7�� ��� or 9�� ���
// 3. 7�� ��� and 9�� ���

//for( n = 1; n < 100; n++)



//����2

int main1_2(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("���� ���� �� ������ �Է��ϼ���.: ");
	scanf("%d %d", &num1, &num2);
	if ((num1 - num2) >= 0)
	{
		printf("%d�� %d�� ���� %d�̴� \n", num1, num2, num1 - num2);
	}

	else if ((num1 - num2) < 0)
	{
		printf("%d�� %d�� ���� %d�̴� \n", num1, num2, (num1 - num2)*(-1));
	}

	return 0;
}




//����3

int main1_3(void)
{
	int num1, num2, num3;

	printf("����, ����, ���� ������ ������ ���ʴ�� �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("���: %d \n", (num1 + num2 + num3) / 3);

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


//����4

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






//����5
int main1_5(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	printf("���� ���� 5���� ������ �Է��ϼ���.: ");
	scanf("%d", &num1);
	if (num1 < 1)


		return 0;
}

//����6

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

	printf("1���� 100���� ¦���� ����: %d \n", total);

	return 0;
}

//����7

int main1_7(void)
{
	int total = 0;
	//int total = 0;
	int num1, num2;
	printf("�� ���� ������ �Է�: ");
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
		} while (num1 <= num2);	// while()��ȣ ���� ������ �����ϴ� do�� ������.
	
	
	}

	printf("\b=%d", total);	// �� ĭ ���� Ŀ���� �����.
	
	return 0;
}

//num1 <= num2�� ��,
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



//����8

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