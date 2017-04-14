#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}		// 입력 버퍼를 비우는 함수

int main6(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();		// 입력버퍼 비우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호 %s \n", perID);
	printf("이름: %s \n", name);


	return 0;
}		


// 어떠한 경우에도 주민번호 6자리만 입력 받도록 재구현된 예제