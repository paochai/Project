#include <stdio.h>
#include <math.h>

struct person
{
	char name[20];		// ����ü�� ����� �ϴ��� �Ϲ����� ������ ����� �״�� ������. ����ü
	char phoneNum[20];	// �� ����� �迭�� ����Ǹ� �迭�� ���ٹ���� ���ϸ� �ǰ�, ����ü�� ��
	int age;			// ���� ������ ������ ����Ǹ� ������ ������ ���ٹ���� ���ϸ� �ȴ�.
};

int main2(void)
{
	struct person man1, man2;
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("�̸� �Է�: "); 
	scanf("%s", man2.name);

	printf("��ȣ �Է�: ");
	scanf("%s", man2.phoneNum);

	printf("���� �Է�: ");
	scanf("%d", &(man2.age));

	printf("�̸�: %s \n", man1.name);
	printf("��ȣ: %s \n", man1.phoneNum);
	printf("����: %d \n", man1.age);

	printf("�̸�: %s \n", man2.name);
	printf("��ȣ: %s \n", man2.phoneNum);
	printf("����: %d \n", man2.age);

	return 0;
}