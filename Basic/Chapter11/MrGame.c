#include <stdio.h>

//Mind Reader
//
//���Ӽ��� :
//���� ������ ���ڸ� ��ǻ�Ͱ� �����.
//���� ������ ���ں��� ũ�� h ��� �Է��Ѵ�.
//���� ������ ���ں��� ������ l �̶�� �Է��Ѵ�.
//���� ������  ���ڿ� ������ y ��� �Է��Ѵ�.


int main11_2(void)
{
	int i = 100, j = 0, com = 0;
	char input1 = 0;
	char input2 = 0;
	

	printf("1�� 100 ������ ���� �߿� �� ���� ���� �����ϼ���.\n");
	printf("������ ������ ���ٸ� h, ���ٸ� l, ������ ���� ��ġ�ϸ� y�� �Է��ϼ���.\n");

	// ���� ����

	while (1)
	{
		com = (i + j) / 2;
		printf("%d �Դϱ�?\n", com);
		
		while (1)
		{
			scanf("%c", &input1);
			scanf("%c", &input2);
			break;
		}

		if (input1 == 121)	// y �Է�
		{
			printf("��ǻ�Ͱ� �¸��߽��ϴ�.\n");
			break;
		}

		if (input1 == 104)	// h �Է�
		{
			j = com;

			continue;
		}



		if (input1 == 108)	// l �Է�
		{
			i = com;

			continue;
		}

		else
		{
			printf("�߸��� �Է� �Դϴ�.\n");
			
			continue;
		}

	}

	return 0;
}