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

		num = rand() % 100 + 1;	//값 생성

		printf("0부터 100 사이의 수 중에 하나를 생성합니다. 6번 안에 맞추면 승리합니다.\n\n");

		while (1)
		{
			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
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
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


			printf("[ 5 ] 번의 기회가 남았습니다.\n");

			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
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
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


			printf("[ 4 ] 번의 기회가 남았습니다.\n");

			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
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
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


			printf("[ 3 ] 번의 기회가 남았습니다.\n");

			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
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
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


			printf("[ 2 ] 번의 기회가 남았습니다.\n");

			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
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
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


			printf("[ 1 ] 번의 기회가 남았습니다.\n");

			printf("정답이라 생각하는 숫자를 입력하세요. <0 to 100>: ");
			scanf("%d", &i);


			if (i > num)
			{
				printf("Low\n패배했습니다.\n게임을 다시 진행하겠습니까?");
			}

			else if (i < num)
			{
				printf("High\n패배했습니다.\n게임을 다시 진행하겠습니까?");
			}

			else {
				printf("정답입니다.\n게임을 다시 진행하겠습니까?");
				break;
			}


		}
		break;
	
}


	return 0;
}