#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}		// 마지막에 삽입되는 널 문자를 없애는 예제

int main7(void)
{
	char str[100];
	printf("문자열 입력: ");
	
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	return 0;
}