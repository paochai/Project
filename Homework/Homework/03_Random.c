#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main3()
{
	char i='q';
	char j='q';
	int num = 0;
	int num1, num2, num3;
	srand((int)time(NULL));

	for (; 1;)
	{


		printf("������ ���ڽ��ϱ�?  <1: ����, 2:����, 3:��> (q �Ǵ� Q�� �Է��ϸ� ����) : ");
		while (1)
		{

			// %c �� �Է��� ���� ���... �Է��� ���ڼ� +1 ��ŭ ������ ����.
			// 1 + Enter, 11 + Enter, 111 + Enter
			scanf("%c", &i);
			if (i != 10)
			{
				scanf("%c", &j);
			}
			//printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);

			num++;

			if (i == 10 || j == 10)
			{
				break;
			}

		}

		// ���� ����
		if (i == 'q' || i == 'Q')
		{
			printf("������������ �����մϴ�.\n");
			break;
		}

		if (i == 49)
		{

			printf("����� : ����, ");
			num1 = rand() % 3 + 1;

			if (num1 == 1)
			{
				printf("��ǻ�� : ����\n�����ϴ�.\n");
			}

			else if (num1 == 2)
			{
				printf("��ǻ�� : ����\n�����ϴ�.\n");
			}

			else
			{
				printf("��ǻ�� : ��\n�̰���ϴ�.\n");
			}


		}


		else if (i == 50)
		{

			printf("����� : ����, ");
			num2 = rand() % 3 + 1;

			if (num2 == 1)
			{
				printf("��ǻ�� : ����\n�̰���ϴ�.\n");
			}

			else if (num2 == 2)
			{
				printf("��ǻ�� : ����\n�����ϴ�.\n");
			}

			else
			{
				printf("��ǻ�� : ��\n�����ϴ�.\n");
			}
		}


		else if (i == 51)
		{

			printf("����� : ��, ");
			num3 = rand() % 3 + 1;

			if (num3 == 1)
			{
				printf("��ǻ�� : ����\n�����ϴ�.\n");
			}

			else if (num3 == 2)
			{
				printf("��ǻ�� : ����\n�̰���ϴ�.\n");
			}

			else
			{
				printf("��ǻ�� : ��\n�����ϴ�.\n");
			}
		}

		else
		{
			printf("�߸��� �Է°� �Դϴ�.\n");
		}
	}
	return 0;
}