#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main3(void)
{
	struct point pos = { 10, 20 };	
	struct person man = { "이승기", "010-1212-0001", 21 };
	
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);

	return 0;
}

// 초기화 방식이 배열과 유사하다. 초기화 할 데이터들을 중괄호 안에 순서대로 나열하면 된다.