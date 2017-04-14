#include <stdio.h>

int main1(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름: %p \n", arr);		// 1. 배열의 이름과 첫 번째 요소가 같다.
	printf("첫 번째 요소: %p \n", &arr[0]);	// 2. 각 요소 간의 차가 4(byte)다.
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);

	// arr = &arr[i];	// 이 문장은 컴파일 에러를 일으킨다.
	return 0;

}