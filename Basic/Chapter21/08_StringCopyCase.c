#include <stdio.h>

int main8(void)
{
	char str1[20] ="1234567890";
	char str2[20];
	char str3[5];

	/**** case1 ****/
	strcpy(str2, str1);
	puts(str2);

	/****chase 2****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	
	return 0;
}

// �迭 ���� str3�� �� �´� ���̸�ŭ�� ���縦 �ϰڴٴ� �ǵ��� ����

// �� ��° strncpy �Լ�ȣ�� ���� ����� �̻��� ���̴� ������ �����ϴ� ��������
// ���ڿ��� ���� �ǹ��ϴ� �� ���ڰ� ������� �ʾұ� �����̴�. ���ڿ��� ������ 
// ������ �׻� �� ������ ������� ����ؾ� �Ѵ�.