#include<stdio.h>

int main22(void)
{
	int num[100] = { 0 };
	int i = 0;
	int j = 0;
	int* ptr = num;

	printf("정수를 입력하세요. (-1을 입력할 때까지)\n");
	
	for(; i < 100; i++)
	{
		scanf("%d", &num[i]);
		
		if (num[i] == -1)	// -1값이 배열에 들어가버린다.
		{
			break;
		}
		printf("%d\n", num[i]);

	}

	//for (; j < )

		// ptr 선언 후 *ptr 이용해서 각 값들을 비교하기
		// 논리는 for문 루프 후 if( num[i] > num[i+1] )
		// num [i] = num[i+1]
		// num [i+1] = num[i]
		// else
		// break;
		
	return 0;
}