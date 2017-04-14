#include <stdio.h>

int main10(void)
{
	char str1[20];
	char str2[20];
	
	printf("문자열 입력 1: ");
	scanf("%s", str1);
	
	printf("문자열 입력 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}

	else
	{
		puts("두 문자열은 동일하지 않습니다.");
		
		if (!strncmp(str1, str2, 3))
			puts("그러나 앞 세 글자는 동일합니다.");
	}
	
	return 0;
}


// 크고 작음은 아스키코드 값을 근거로 한다.
// A보다 B가, B보다 C가 아스키 코드 값이 더 크고 A보다 a가, B보다 b가 아스키 코드 값이 더 크니,
// 사전편찬순서를 기준으로 뒤에 위치할 수록 더 큰 문자열로 인식해도 된다.