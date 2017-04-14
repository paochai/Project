#include <stdio.h>

//Mind Reader
//
//게임설명 :
//내가 생각한 숫자를 컴퓨터가 맞춘다.
//내가 생각한 숫자보다 크면 h 라고 입력한다.
//내가 생각한 숫자보다 작으면 l 이라고 입력한다.
//내가 생각한  숫자와 같으면 y 라고 입력한다.


int main11_2(void)
{
	int i = 100, j = 0, com = 0;
	char input1 = 0;
	char input2 = 0;
	

	printf("1과 100 사이의 정수 중에 한 가지 수를 생각하세요.\n");
	printf("생각한 수보다 높다면 h, 낮다면 l, 생각한 수와 일치하면 y를 입력하세요.\n");

	// 로직 시작

	while (1)
	{
		com = (i + j) / 2;
		printf("%d 입니까?\n", com);
		
		while (1)
		{
			scanf("%c", &input1);
			scanf("%c", &input2);
			break;
		}

		if (input1 == 121)	// y 입력
		{
			printf("컴퓨터가 승리했습니다.\n");
			break;
		}

		if (input1 == 104)	// h 입력
		{
			j = com;

			continue;
		}



		if (input1 == 108)	// l 입력
		{
			i = com;

			continue;
		}

		else
		{
			printf("잘못된 입력 입니다.\n");
			
			continue;
		}

	}

	return 0;
}