#include <stdio.h>

int main4(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);	// ���ڿ��� �Է� �޾Ƽ� �迭 str�� ����
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0')		// scanf �Լ��� ȣ���� ���ؼ� �Է� ����
	{								// ���ڿ��� ������ �� ���ڰ� �������� Ȯ
		printf("%c", str[idx]);		// ���ϱ� ���� ����
		idx++;
	}
	printf("\n");
	
	
	return 0;
}