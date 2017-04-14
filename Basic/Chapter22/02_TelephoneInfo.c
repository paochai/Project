#include <stdio.h>
#include <math.h>

struct person
{
	char name[20];		// 구조체의 멤버라 하더라도 일반적인 접근의 방식을 그대로 따른다. 구조체
	char phoneNum[20];	// 의 멤버로 배열이 선언되면 배열의 접근방식을 취하면 되고, 구조체의 멤
	int age;			// 버로 포인터 변수가 선언되면 포인터 변수의 접근방식을 취하면 된다.
};

int main2(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("이름 입력: "); 
	scanf("%s", man2.name);

	printf("번호 입력: ");
	scanf("%s", man2.phoneNum);

	printf("나이 입력: ");
	scanf("%d", &(man2.age));

	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);

	return 0;
}