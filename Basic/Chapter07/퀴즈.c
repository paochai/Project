#include <stdio.h>

//���� 1

int main8_1(void)
{
	int input = 0;
	int total = 0;

	do
	{
		printf("�������� �Է��ϼ���.(0 �Է½� ����): ");
		scanf("%d", &input);
		total = total + input;
	} while (input != 0);

	printf("�Է��� �������� ���� %d �Դϴ�.: ", total);

	return 0;
}



//���� 2

int main8_2(void)
{
	double total = 0.0;
	int input = 0;
	int num;
	int i = 0;
	
	printf("�Է��� ������ ������ ���� ������ �Է��ϼ���.: ");
	scanf("%d", &num);

	
	for (i; i<num; i++)
	{
		printf("���� �Է�: ");
		scanf("%d", &input);
		total = total + input;
	}
	printf("���: %f \n", (total / num));

	return 0;
}


//����3


int main8_3(void)
{
	int cur;
	int is = 9;

	printf("�������� ����� ������ �Է��ϼ���.: ");
	scanf("%d", &cur);

	while(is > 0)	
	{
		printf("%d��%d=%d \n", cur, is, cur*is);
		is--;
	}

	return 0;
}



//����4


int main8_4(void)
{
	int total = 1;
	int num;
	printf("������ �Է��ϸ� ���丮�� �Լ����� ����� ��µ˴ϴ�: ");
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


//����5

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


//����6

int main8_6(void)
{
	int cur, is;
	
	printf("����\n");
	for (is = 1; is < 10; is++)
	{
		
		for (cur = 2; cur < 10; cur++)
		{
		    
			printf("%dx%d=%d \t", cur, is, cur*is);
		}
		printf("\n");
	}
	
	printf("\n");

	printf("����\n");
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