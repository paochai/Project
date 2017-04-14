#include <stdio.h>

int main7(void)
{
	int str1[6] = { 1, 2, 3, 4, 5, 6 };
	int str2[6] = { 0 };
	int* ptr;


	//str2[0] = str1[5];
	//str2[1] = str1[4];
	//str2[2] = str1[3];
	//str2[3] = str1[2];
	//str2[4] = str1[1];
	//str2[5] = str1[0];

	//for (int i = 0; i < 6; i++)
	//{
	//	str2[i] = str1[5 - i];
	//}

	//ptr = str1;
	//str2[0] = *ptr[5];
	//str2[1] = *ptr[4];
	//str2[2] = *ptr[3];
	//str2[3] = *ptr[2];
	//str2[4] = *ptr[1];
	//str2[5] = *ptr[0];

	str2[0] = *(ptr + 5);
	str2[1] = *(ptr + 4);
	str2[2] = *(ptr + 3);
	str2[3] = *(ptr + 2);
	str2[4] = *(ptr + 1);
	str2[5] = *(ptr + 0);





	return 0;
}