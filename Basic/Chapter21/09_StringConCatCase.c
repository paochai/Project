#include <stdio.h>

int main9(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** case 1 ****/
	strcat(str1, str2);
	puts(str1);

	/**** case2 ****/
	strncat(str3, str4, 7);
	puts(str3);

	return 0;
}


// 덧붙여지는 방식
// strncat 함수는 덧붙일 문자열의 최대 길이를 제한한다.