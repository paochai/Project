#include <stdio.h>

int main4(void)
{
	char str[7];
	int i;
	
	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);		// stdin으로부터 문자열을 입력 받아서 str에 저장을 하되,
		printf("Read %d: %s \n", i + 1, str);	// 널 문자를 포함하여 sizeof(str)의 크기만큼 저장을 해라.
	}

	return 0;
}


//6개의 문자씩 끊어서 읽히고 있다. 즉 한번의 fgets 함수호출당 최대 6개의 문자만 읽혀진다.
//엔터 키의 입력도 문자열의 일부로 받아 들임을 보임
//공백을 포함하는 문자열을 읽어 들임을 보임