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

	return cen;			// �Ϲ������� return�� �ѹ��ۿ� �ȵ����� ����ü�� ����Ͽ� ���ڸ� ��ȯ������ ����Ѵ�.
}

int main3(void)
{
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	
	return 0;
}