#include <stdio.h>

int main5(void)
{
	char perID[7];	// �ֹι�ȣ �� 6�ڸ��� �Է� �ޱ� ���ؼ� �迭�� ���̰� �� ���� ���� 7�̴�.
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	//----------------------------------------
	for (int i = 0; i < 10; i++)
	{
		printf("%d \mn", perID[i]);
	}
	printf("\n\n\n");
	// Enter ���� ���� ���ȵǰ� �ִ� ��Ȳ

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;
}


// ���� Ű�� ���Ƽ� ������ �Ǵ� ��Ȳ
// �� �ȵ�� ����� ������ �����Ǵ� ��Ȳ