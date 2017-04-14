#include <stdio.h>

// 문제 1
// 가로가 9, 세로가 3인 int형 2차원 배열을 선언하여 구구단 중 2, 3, 4단을 저장한다.
// 그리고 제대로 저장이 되었는지 확인하기 위해 출력을 하는 프로그램을 작성하라



int main16_1(void)
{

	int i, j;
	int arr[3][9] = {

		{ 2, 4, 6, 8, 10, 12, 14, 16, 18 },
		{ 3, 6, 9, 12, 15, 18, 21, 24, 27 },
		{ 4, 8, 12, 16, 20, 24, 28, 32, 36 }


	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}

	return 0;
}





// 문제 2
// 우선 아래와 같은 형태의 좌측배열 A를 선언한다. 그리고 A배열의 초기값을 이용해서
// 우측배열 B를 초기화하는 프로그램을 작성하시오


int main16_2(void)
{

	int Hor, Ver;
	int arr1[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[5][2];



	for (Hor = 0; Hor < 2; Hor++)
	{
		for (Ver = 0; Ver < 5; Ver++)
		{
			arr2[Ver][Hor] = arr1[Hor][Ver];
		}

	}

	for (Hor = 0; Hor < 5; Hor++)
	{
		for (Ver = 0; Ver < 2; Ver++)
		{
			printf("%d ", arr2[Hor][Ver]);
		}
		printf("\n");

	}


}





// 문제3
// 성적관리 프로그램을 작성한다.국어, 영어, 수학, 국사 4과목이고 학생은 이순신, 강감찬, 을지문덕, 권율 4명이다.
// 4 by 4 배열을 선언하고 사용자로부터 4사람의 4과목 점수를 입력받아 다음의 형태로 값을 저장하고
// 총점을 구하는 프로그램을 작성하라.


int main16_3(void)
{
	int Score[4][4];
	int Sum1, Sum2, Sum3, Sum4, Sum5, Sum6, Sum7, Sum8, i, j;
	Sum1 = 0;
	Sum2 = 0;
	Sum3 = 0;
	Sum4 = 0;
	Sum5 = 0;
	Sum6 = 0;
	Sum7 = 0;
	Sum8 = 0;


	// 점수 입력 받기

	for (i = 0; i < 4; i++)
	{

		if (i == 0)
		{
			for (j = 0; j < 4; j++)
			{
				printf("국어 점수 이순신/강감찬/을지문덕/권율 순으로 입력 : ");
				scanf("%d", &Score[i][j]);
			}
			printf("\n");
		}

		if (i == 1)
		{
			for (j = 0; j < 4; j++)
			{
				printf("영어 점수 이순신/강감찬/을지문덕/권율 순으로 입력 : ");
				scanf("%d", &Score[i][j]);
			}
			printf("\n");

		}

		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				printf("수학 점수 이순신/강감찬/을지문덕/권율 순으로 입력 : ");
				scanf("%d", &Score[i][j]);
			}
			printf("\n");

		}

		if (i == 3)
		{
			for (j = 0; j < 4; j++)
			{
				printf("국사 점수 이순신/강감찬/을지문덕/권율 순으로 입력 : ");
				scanf("%d", &Score[i][j]);
			}
			printf("\n");

		}


	}

	// 각 과목 or 학생별 총점 출력

	for (i = 0; i < 4; i++)
	{
		Sum1 += Score[i][0];
		Sum2 += Score[i][1];
		Sum3 += Score[i][2];
		Sum4 += Score[i][3];
	}
	printf("이순신 학생의 전과목 총점: %d \n", Sum1);
	printf("강감찬 학생의 전과목 총점: %d \n", Sum2);
	printf("을지문덕 학생의 전과목 총점: %d \n", Sum3);
	printf("권율 학생의 전과목 총점: %d \n", Sum4);
	printf("\n");

	for (j = 0; j < 4; j++)
	{
		Sum5 += Score[0][j];
		Sum6 += Score[1][j];
		Sum7 += Score[2][j];
		Sum8 += Score[3][j];
	}
	printf("학생들의 국어 점수 총점: %d \n", Sum5);
	printf("학생들의 영어 점수 총점: %d \n", Sum6);
	printf("학생들의 수학 점수 총점: %d \n", Sum7);
	printf("학생들의 국사 점수 총점: %d \n", Sum8);
	printf("\n");


	return 0;

}