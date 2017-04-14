#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;	// 구조체 변수를 대상으로는 덧셈 및 뺄셈 연산이 불가능, 필요하다면 덧셈함수와 뺄셈함수 정의해야함.

Point AddPoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

Point MinPoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

int main7(void)
{
	Point pos1 = { 5, 6 };
	Point pos2 = { 2, 9 };
	Point result;

	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);

	return 0;
}