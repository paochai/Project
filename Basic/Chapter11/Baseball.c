#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�߱�����
//�ߺ����� �ʴ� 3���� ������ �����Ѵ�. (1 ~9)
//����ڴ� 3���� ���ڸ� �Է��Ѵ�.
//������ 3���� ���ڸ� ���ߴµ� ��ġ���� ��Ȯ�� ����� �Ѵ�.���ڿ� ������ ��ġ���� ��ġ�ϸ� strike �� �����Ѵ�.
//���ڴ� ������ ��ġ�� Ʋ�ȴٸ� ball�� �����Ѵ�.
//����3���� ��� ��ġ���� ������  out���� �����Ѵ�.
//3 strike �� �Ǹ� ������ ����ȴ�.
//�õ��� Ƚ���� ǥ���Ѵ�.

// -----------------Ƚ�� ���� �߰� ���� �ʿ�-----------------

int main11_1(void)
{

	int r1, r2, r3;
	int i, j;
	int strike = 0, ball = 0;
	int cnt = 0;

	while (1)
	{
		srand((int)time(NULL));

		r1 = rand() % 9 + 1;
		r2 = rand() % 9 + 1;
		r3 = rand() % 9 + 1;

		if (r1 != r2 && r1 != r3 && r2 != r3)
		{
			break;
		}

	}

	int arr[3] = { r1, r2, r3 };
	printf("%d%d%d", r1, r2, r3);

	// ���� ����
	printf("������ �����մϴ�. ");
	while (1)
	{

		int player[3];

		printf("3�ڸ��� ���ڸ� �Է��ϼ���.\n");
		scanf("%d %d %d", &player[0], &player[1], &player[2]);

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (arr[i] == player[j] && i == j)
					strike++;
				if (arr[i] == player[j] && i != j)
					ball++;
			}

		}
		if (strike == 3)
		{
			printf("�����Դϴ�.\n:");
			break;
		}
		printf("%d ��Ʈ����ũ %d ��\n", strike, ball);
		
		for (cnt = 1; cnt < 10;)
		{
			printf("%d �� �õ� �߽��ϴ�.\n", cnt);
			break;
		}
		cnt++;

		strike = 0;
		ball = 0;

	}
}


