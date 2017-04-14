#include <stdio.h>

//1.숫자와문자를 무작위로 입력받는다. > 123abc654ijuyh
//2.이중에 숫자만 찾아낸다.
//3.찾아낸 숫자의 합을 구해서 출력한다.
//
//ASCII코드표를 활용하여 문제를 해결한다.
//
//실행예)
//정수형데이터입력 : ab12
//	입력 받은 문자열 ab12
//	a->문자
//	b->문자
//	1->숫자
//	2->숫자
//	숫자의 합 : 3




int main5(void)
{
	int i, sum = 0;
	char num[100];
	printf("정수형 데이터 입력: ");
	scanf("%s", num);
	printf("입력 받은 문자열: %s\n", num);


	for (int i=0; i < 100; i++)
	{
		if (num[i] == '\0')
		{
			break;
		}

		if (47 < num[i] && num[i] < 58)
		{
			sum = sum + (num[i] - 48);
			printf("%d->숫자\n", num[i] - 48);
		}

		else
		{
		printf("%c->문자\n", num[i]);
		}


	}

	printf("숫자의 합 : %d\n", sum);

}