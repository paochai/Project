#include <stdio.h>

int main8(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");	// �����ϴ� �����Ͱ� ���ڿ��̹Ƿ� �ؽ�Ʈ ���� �����Ѵ�.
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();	// ���ۿ� �����ִ� \n�� �Ҹ��� ���ؼ�
		fprintf(fp, "%s %c %d", name, sex, age);
	}

	fclose(fp);
	
	return 0;
}