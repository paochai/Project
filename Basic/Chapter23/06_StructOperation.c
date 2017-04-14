#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;		// 구조체 변수간 대입연산의 결과로 멤버 대 멤버 복사가 이뤄진 것을 확인.

int main6(void)
{
	Point pos1 = { 1, 2 };
	Point pos2;
	pos2 = pos1;	// pos1의 멤버 대 pos2의 멤버간 복사가 진행

	printf("크기: %d \n", sizeof(pos1));		// pos1의 전체 크기 반환
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	
	printf("크기: %d \n", sizeof(pos2));		// pos2의 전체 크기 반환
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);

	return 0;
}