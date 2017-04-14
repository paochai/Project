#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle* cptr)	// 숙지
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int main8(void)
{
	Circle c1 = { {1, 2}, 3.5 };
	Circle c2 = { 2, 4, 3.9 };

	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	return 0;
}

// 앞서 정의한 구조체는 이후에 새로운 구조체를 선언하는데 있어서 
// 기본 자료형의 이름과 마찬가지로 사용이 될 수 있다.