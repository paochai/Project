#include <stdio.h>

char* ReadUserName(void)
{
	char* name = (char*)malloc(sizeof(char)* 30);
	printf("What's your name? ");

	gets(name);
	return name;
}	// ReadUserName �Լ��� ȣ��� ������ ���ο� �޸� ������ �Ҵ��� �ǰ� �� �޸� ������ �Լ��� �������� �Ŀ���
	// �Ҹ���� �ʴ´�.

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
	free(name2);	// �Ҹ�

	return 0;
}