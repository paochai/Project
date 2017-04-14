#include <stdio.h>


char* ReadUserName1(void)
{
	char name[30];
	printf("What's your name? ");
	gets(name);

	return name;
}

int main1(void)
{
	char* name1;
	char* name2;

	name1 = ReadUserName1();
	printf("name1: %s \n", name1);

	name2 = ReadUserName1();
	printf("name2: %s \n", name1);

	return 0;
}