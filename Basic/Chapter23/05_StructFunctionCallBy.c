#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr)		// ���� ��Ī
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main5(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans(&pos);		// pos�� ���� ���� ��Ī�̵� ��Ų��.
	ShowPosition(pos);
	OrgSymTrans(&pos);		// pos�� ���� ���� ��Ī�̵� ��Ų��.
	ShowPosition(pos);

	return 0;
}