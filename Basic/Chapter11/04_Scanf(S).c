#include <stdio.h>

int main4(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str);	// 문자열을 입력 받아서 배열 str에 저장
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')		// scanf 함수의 호출을 통해서 입력 받은
	{								// 문자열의 끝에도 널 문자가 존재함을 확
		printf("%c", str[idx]);		// 인하기 위한 문장
		idx++;
	}
	printf("\n");
	
	
	return 0;
}