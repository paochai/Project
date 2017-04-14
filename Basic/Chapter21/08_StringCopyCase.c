#include <stdio.h>

int main8(void)
{
	char str1[20] ="1234567890";
	char str2[20];
	char str3[5];

	/**** case1 ****/
	strcpy(str2, str1);
	puts(str2);

	/****chase 2****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	
	return 0;
}

// 배열 길이 str3에 딱 맞는 길이만큼만 복사를 하겠다는 의도의 문장

// 두 번째 strncpy 함수호출 후의 결과에 이상이 보이는 이유는 복사하는 과정에서
// 문자열의 끝을 의미하는 널 문자가 복사되지 않았기 때문이다. 문자열을 복사할 
// 때에는 항상 널 문자의 복사까지 고려해야 한다.