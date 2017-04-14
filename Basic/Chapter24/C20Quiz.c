//#include <stdio.h>
//
//// 문제1
//// 길이가 4 by 4인 int형 배열을 선언하고 순서대로 1, 2, 3 … 정수를 입력하여 초기화하자.
//// 그리고 배열의 요소들을 오른쪽 방향으로 90º씩 이동시켜서 그 결과를 출력하는 프로그램을 작성하라.
//
//
//int arr[4][4];
//
//
//
//int main20(void)
//{
//	int arr[4][4] = {
//		{ 1, 2, 3, 4 },
//		{ 5, 6, 7, 8 },
//		{ 9, 10, 11, 12 },
//		{ 13, 14, 15, 16 }
//	};
//
//
//	int i, j;
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");
//
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 3; j >= 0; j--)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");
//
//	for (i = 3; i > 0; i--)
//	{
//		for (j = 3; j >= 0; j--)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");
//
//
//	for (j = 3; j >= 0; j--)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//
//
//
//
//	return 0;
//}
//
//
//
//
//
//
//// 문제2
//// 달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다.달팽이배열은 다음과 같다.
//// 4 by 4 크기의 달팽이배열
//// 사용자로부터 숫자 n을 입력받아서 n by n 길이에 해당하는 달팽이 배열을 출력해주는 프로그램을 작성하라.!!!
//
//
//
//int main(void)
//{
//	int	i, n;
//	int j = 1, k = 1, l = 1;
//	int arr[50][50] = { 0 };
//	
//	printf("배열의 크기를 정수로 입력 : ");
//	scanf("%d", &n);
//	printf("입력한 배열의 크기 : %d x %d\n", n, n);
//
//	// 로직 시작
//
//	for (i = 0; i < n*n; i++)
//	{
//		arr[j - 1][k - 1] = i + 1;
//		
//		if (j == l && k != (n - l) + 1)
//		{
//			k++;
//		}
//
//		else if (j != (n - l) + 1 && k == (n - l) + 1)
//		{
//			j++;
//		}
//
//		else if (j == (n - l) + 1 && k != l)
//		{
//			k--;
//		}
//
//		if (j == k && k == l)
//		{
//			l++;
//			j++;
//			k++;
//		}
//
//		else
//		{
//			j--;
//		}
//
//
//
//
//	}
//
//	for (j = 0; j < n; j++)
//	{
//		printf("%4d", arr[j][k]);
//	}
//
//	printf("\n");
//
//	return 0;
//}


#include <stdio.h>

int mainD()
{
	int i, j = 1, k = 1, l = 1, n, arr[19][19];
	printf("n<19\?"); scanf("%d", &n);
	for (i = 0; i<n*n; i++)
	{
		arr[j - 1][k - 1] = i + 1;
		if (j == l&&k != n - l + 1)k++;
		else if (j != n - l + 1 && k == n - l + 1)j++;
		else if (j == n - l + 1 && k != l)k--;
		else j--;
		if (j == k&&k == l) { l++; j++; k++; };
	}
	for (j = 0; j<n; j++)
	{
		for (k = 0; k<n; k++)
		{
			printf("%4d", arr[j][k]);
		}
		printf("\n");
	}
	return 0;
}
