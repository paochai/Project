#include <stdio.h>

//Mind Reader
//
//���Ӽ��� :
//���� ������ ���ڸ� ��ǻ�Ͱ� �����.
//���� ������ ���ں��� ũ�� h ��� �Է��Ѵ�.
//���� ������ ���ں��� ������ l �̶�� �Է��Ѵ�.
//���� ������  ���ڿ� ������ y ��� �Է��Ѵ�.


int main15(void)
{
	int com = 50;
	int max = 100, min = 1;
	char input1 = 0;
	char input2 = 0;
	printf("1�� 100 ������ ���� �߿� �� ���� ���� �����ϼ���.\n");
	printf("������ ������ ���ٸ� h, ���ٸ� l, ������ ���� ��ġ�ϸ� y�� �Է��ϼ���.\n");

	// ���� ����
	while (1)
	{
		printf("%d �Դϱ�?\n", com);


		while (1)
		{


			scanf("%c", &input1);
			scanf("%c", &input2);

			if (input1 == 'y')
			{
				printf("��ǻ�Ͱ� �¸��߽��ϴ�.\n");
				break;
			}

			if (input1 == 'h')
			{
				printf("�����ϴ�.\n");
				max = com;
				continue;

			}



			if (input1 == 'l')
			{

				printf("�����ϴ�.\n");
				min = com;
				continue;

			}

			else
			{
				printf("�߸��� �Է��Դϴ� �ٽ� �Է����ּ���.\n");
			}


		}

	}

	return 0;
}