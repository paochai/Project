#include <stdio.h>
//#define ADD  1
#define MIN  0

int main6(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD		// ADD�� '��'�̶��
	printf("%d + %d = %d", num1, num2, num1 + num2);	// ADD�� ���ǵǾ��ٸ� ~endif���� ������ ��� ����
#endif

#ifdef MIN		// MIN�� '��'�̶��
	printf("%d - %d = %d", num1, num2, num1 - num2);	// MIN�� ���ǵǾ��ٸ� ~endif���� ������ ��� ����
#endif

	return 0;
}