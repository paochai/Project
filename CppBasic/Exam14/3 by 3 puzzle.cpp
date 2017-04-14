//// 3 By3 Puzzle
//
//// 키 입력시 필요
//#include <iostream>
//#include <conio.h>
//#include <stdlib.h>
//
//#define RIGHT 77
//#define LEFE  75
//#define UP 72
//#define DOWN 80
//
//
//
//
//// 키 값 입력받기
//int get_directionkey()//방향키를 입력받는 함수
//{
//	int key;
//	key = _getch();
//	if (key == 224)//방향키
//	{
//		return _getch(); //어떤 방향 키인지 반환
//	}
//	return 0;	//방향키가 아님
//}
//
//void print_puzzle(int puzzle[3][3])
//{
//	int r, c;
//
//	// 화면 지우기
//	system("cls"); //콘솔 화면을 지우기(printf 후 다시 printf 하기 전에 클리어)
//
//	for (r = 0; r < 3; r++)
//	{
//
//		for (c = 0; c < 3; c++)
//
//		{
//
//			if (puzzle[r][c])
//			{
//				printf("%d", puzzle[r][c]);
//			}
//
//			else
//			{
//				printf(" ");
//			}
//
//		}
//		printf("\n");
//	}
//
//}
//
//// --------------------
//key = get_directionkey();
//switch (key)
//{
//case 77:	//RIGHT
//	break;
//case 75:	//LEFT
//	break;
//case 72:	//UP
//	break;
//case 80:	//DOWN
//	break;
//}
//--------------------
//
//
//
//if (arr[3][3] ==
//{ {1, 2, 3 },
//{ 4, 5, 6 },
//{ 7 ,8, '\0' })
//
//break;	// 종료