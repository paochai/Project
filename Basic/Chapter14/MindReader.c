#include <stdio.h>

//Mind Reader
//
//게임설명 :
//내가 생각한 숫자를 컴퓨터가 맞춘다.
//내가 생각한 숫자보다 크면 h 라고 입력한다.
//내가 생각한 숫자보다 작으면 l 이라고 입력한다.
//내가 생각한  숫자와 같으면 y 라고 입력한다.


int main15(void)
{
	int com = 50;
	int max = 100, min = 1;
	char input1 = 0;
	char input2 = 0;
	printf("1과 100 사이의 정수 중에 한 가지 수를 생각하세요.\n");
	printf("생각한 수보다 높다면 h, 낮다면 l, 생각한 수와 일치하면 y를 입력하세요.\n");

	// 로직 시작
	while (1)
	{
		printf("%d 입니까?\n", com);


		while (1)
		{


			scanf("%c", &input1);
			scanf("%c", &input2);

			if (input1 == 'y')
			{
				printf("컴퓨터가 승리했습니다.\n");
				break;
			}

			if (input1 == 'h')
			{
				printf("낮습니다.\n");
				max = com;
				continue;

			}



			if (input1 == 'l')
			{

				printf("높습니다.\n");
				min = com;
				continue;

			}

			else
			{
				printf("잘못된 입력입니다 다시 입력해주세요.\n");
			}


		}

	}

	return 0;
}