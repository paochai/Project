#include <stdio.h>

int main5(void)
{
	char perID[7];	// 주민번호 앞 6자리만 입력 받기 위해서 배열의 길이가 널 문자 포함 7이다.
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	//----------------------------------------
	for (int i = 0; i < 10; i++)
	{
		printf("%d \mn", perID[i]);
	}
	printf("\n\n\n");
	// Enter 값이 아직 사용안되고 있는 상황

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호 %s \n", perID);
	printf("이름: %s \n", name);

	return 0;
}


// 엔터 키가 남아서 문제가 되는 상황
// 말 안듣는 사람들 때문에 문제되는 상황