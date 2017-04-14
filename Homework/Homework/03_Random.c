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


		printf("무엇을 내겠습니까?  <1: 가위, 2:바위, 3:보> (q 또는 Q를 입력하면 종료) : ");
		while (1)
		{

			// %c 로 입력을 받을 경우... 입력한 문자수 +1 만큼 루프가 돈다.
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

		// 로직 시작
		if (i == 'q' || i == 'Q')
		{
			printf("가위바위보를 종료합니다.\n");
			break;
		}

		if (i == 49)
		{

			printf("사용자 : 가위, ");
			num1 = rand() % 3 + 1;

			if (num1 == 1)
			{
				printf("컴퓨터 : 가위\n비겼습니다.\n");
			}

			else if (num1 == 2)
			{
				printf("컴퓨터 : 바위\n졌습니다.\n");
			}

			else
			{
				printf("컴퓨터 : 보\n이겼습니다.\n");
			}


		}


		else if (i == 50)
		{

			printf("사용자 : 바위, ");
			num2 = rand() % 3 + 1;

			if (num2 == 1)
			{
				printf("컴퓨터 : 가위\n이겼습니다.\n");
			}

			else if (num2 == 2)
			{
				printf("컴퓨터 : 바위\n비겼습니다.\n");
			}

			else
			{
				printf("컴퓨터 : 보\n졌습니다.\n");
			}
		}


		else if (i == 51)
		{

			printf("사용자 : 보, ");
			num3 = rand() % 3 + 1;

			if (num3 == 1)
			{
				printf("컴퓨터 : 가위\n졌습니다.\n");
			}

			else if (num3 == 2)
			{
				printf("컴퓨터 : 바위\n이겼습니다.\n");
			}

			else
			{
				printf("컴퓨터 : 보\n비겼습니다.\n");
			}
		}

		else
		{
			printf("잘못된 입력값 입니다.\n");
		}
	}
	return 0;
}