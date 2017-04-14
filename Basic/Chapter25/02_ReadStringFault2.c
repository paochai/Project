#include <stdio.h>

char name[30];		// 전역변수는 답이 될 수 없음을 보이는 예제 및 실행결과
char* ReadUserName2(void)
{
	printf("What's your name? ");
	gets(name);

	return name;
}

int main2(void)
{
	char* name1;
	char* name2;
	
	name1 = ReadUserName2();
	printf("name1: %s \n", name1);

	name2 = ReadUserName2();
	printf("name2: %s \n", name1);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);

	return 0;
}