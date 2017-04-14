#include<stdio.h>

struct point
{
	int xpos;
	int ypos;
};

int main6(void)
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;

	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;

	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);

	return 0;
}


// 프로그래머들이 주로 사용하는 연산자이니 -> 연산자의 사용에 익숙해지자. (C++ 필수)