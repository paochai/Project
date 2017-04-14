#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//야구게임
//중복되지 않는 3개의 정수를 생성한다. (1 ~9)
//사용자는 3개의 숫자를 입력한다.
//생성된 3개의 숫자를 맞추는데 위치까지 정확히 맞춰야 한다.숫자와 숫자의 위치까지 일치하면 strike 로 판정한다.
//숫자는 맞지만 위치가 틀렸다면 ball로 판정한다.
//숫자3개가 모두 일치하지 않으면  out으로 판정한다.
//3 strike 가 되면 게임은 종료된다.
//시도한 횟수를 표시한다.

// -----------------횟수 제한 추가 수정 필요-----------------

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

	// 로직 시작
	printf("게임을 시작합니다. ");
	while (1)
	{

		int player[3];

		printf("3자리의 숫자를 입력하세요.\n");
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
			printf("정답입니다.\n:");
			break;
		}
		printf("%d 스트라이크 %d 볼\n", strike, ball);
		
		for (cnt = 1; cnt < 10;)
		{
			printf("%d 번 시도 했습니다.\n", cnt);
			break;
		}
		cnt++;

		strike = 0;
		ball = 0;

	}
}


