#include <stdio.h>

char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char)* 30);
	printf("What's your name? ");

	gets(name);
	return name;
}	// ReadUserName 함수가 호출될 때마다 새로운 메모리 공간이 할당이 되고 이 메모리 공간은 함수를 빠져나간 후에도
	// 소멸되지 않는다.

int main4(void)
{
	char* name1;
	char* name2;

	name1 = ReadUserName4();
	printf("name1; %s \n", name1);

	name2 = ReadUserName4();
	printf("name1; %s \n", name2);

	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	free(name1);
	free(name2);	// 소멸

	return 0;
}