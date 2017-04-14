#include <stdio.h>

int main10(void)
{
	char sel;
	printf("M 오전, A 오후, E 저녁 \n");
	printf("입력: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;

	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;

	case 'E':
	case 'e':
		printf("Evening \n");
		break;	// 사실 불필요한 break문!->밑에 default를 설정해주면 의미가 생긴다. 쓰는 습관 들이기
	}

	return 0;
}