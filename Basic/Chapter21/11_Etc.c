#include <stdio.h>
#include <stdlib.h>

int main11(void)
{
	char str[20];
	
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));
	
	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str));

	return 0;
}


// ���� �Լ����� �𸥴ٸ� ���ڿ��� ����� ���� ������ int�� �Ǵ� 
// double������ ��ȯ�ϴ� ���� ���ŷο� ���� �� �� �ִ�. 