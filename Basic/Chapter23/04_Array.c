#include<stdio.h>

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;	// ����ü�� ����� �迭�� ����� ��� ����ü ������ ���ڷ� �����ϰų� ��ȯ ��
			// �迭������ ��°�� ���簡 �̷�����.


void ShowPersonInfo(Person man)
{
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

Person ReadPersonInfo(void)
{
	Person man;
	printf("name? ");
	scanf("%s", man.name);

	printf("phone? ");
	scanf("%s", man.phoneNum);
	
	printf("age? ");
	scanf("%d", &man.age);

	return man;
}

int main4(void)
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}