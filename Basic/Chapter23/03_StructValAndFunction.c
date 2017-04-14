#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition3(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);

	return cen;			// 일반적으론 return이 한번밖에 안되지만 구조체를 사용하여 인자를 반환값으로 사용한다.
}

int main3(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	
	return 0;
}