#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main25(void)
{

	int num = 0;
	int i;

	while (1)
	{
		srand((int)time(NULL));

		num = rand() % 100 + 1;	//�� ����

		printf("0���� 100 ������ �� �߿� �ϳ��� �����մϴ�. 6�� �ȿ� ���߸� �¸��մϴ�.\n\n");

		while (1)
		{
			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);



			if (i > num)
			{
				printf("Low\n");
			}

			else if (i < num)
			{
				printf("High\n");
			}

			else
			{
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


			printf("[ 5 ] ���� ��ȸ�� ���ҽ��ϴ�.\n");

			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n");
			}

			else if (i < num)
			{
				printf("High\n");
			}

			else
			{
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


			printf("[ 4 ] ���� ��ȸ�� ���ҽ��ϴ�.\n");

			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n");
			}

			else if (i < num)
			{
				printf("High\n");
			}

			else
			{
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


			printf("[ 3 ] ���� ��ȸ�� ���ҽ��ϴ�.\n");

			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n");
			}

			else if (i < num)
			{
				printf("High\n");
			}

			else
			{
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


			printf("[ 2 ] ���� ��ȸ�� ���ҽ��ϴ�.\n");

			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n");
			}

			else if (i < num)
			{
				printf("High\n");
			}

			else
			{
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


			printf("[ 1 ] ���� ��ȸ�� ���ҽ��ϴ�.\n");

			printf("�����̶� �����ϴ� ���ڸ� �Է��ϼ���. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n�й��߽��ϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
			}

			else if (i < num)
			{
				printf("High\n�й��߽��ϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
			}

			else {
				printf("�����Դϴ�.\n������ �ٽ� �����ϰڽ��ϱ�?");
				break;
			}


		}
		break;
	
}


	return 0;
}