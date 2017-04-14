#include< stdio.h>

int main3(void)
{
	int* ptr1 = (int*)malloc(sizeof(int));
	int* ptr2 = (int*)malloc(sizeof(int)* 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
	{
		ptr2[i] = i+1;
	}
	printf("%d \n", *ptr1);		// 이렇듯 힙 영역으로의 접근은 포인터를 통해서만 이뤄진다.
	
	for (i = 0; i < 7; i++)
	{
		printf("%d ", ptr2[i]);
	}
		free(ptr1);
		free(ptr2);
	
		return 0;
}