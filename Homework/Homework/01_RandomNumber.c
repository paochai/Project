#include <stdio.h>
#include <stdlib.h>		// srand(), rand()
#include <time.h>		// time()

int main1()
{

	int num;

	printf("%d \n", (int)time(NULL));

	srand((int)time(NULL));		// random�ʱ�ȭ�� ������ ����� �ѹ��� ���� �ȴ�.

	num = rand() % 10;			// random�� (0~42�ﰳ�� ���ڰ� �����ȴ�.)
	printf("������ ���� : %d \n", num);


	return 0;
}

//�� �ڵ带 ����� ���� ������ Ǳ�ϴ�.
//������ ���ڸ� ���� ǥ���մϴ�.
//
//�� 100�� �ڸ��� ���� 10�� �ڸ��� �� 1�� �ڸ��� ���� ���Ƽ��� �ȵ˴ϴ�.
//
//Ex )
//101 �� �ȵ� : 1�� �ΰ���
//777 �� �ȵ� : 7�� ������
//224 �� �ȵ� : 2�� �ΰ���
//233 �� �ȵ� : 3�� �ΰ���



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
	
	printf("%d%d%d ��,", num1, num2, num3);

	return 0;
}