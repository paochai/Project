//// 3 By3 Puzzle
//
//// Ű �Է½� �ʿ�
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
//// Ű �� �Է¹ޱ�
//int get_directionkey()//����Ű�� �Է¹޴� �Լ�
//{
//	int key;
//	key = _getch();
//	if (key == 224)//����Ű
//	{
//		return _getch(); //� ���� Ű���� ��ȯ
//	}
//	return 0;	//����Ű�� �ƴ�
//}
//
//void print_puzzle(int puzzle[3][3])
//{
//	int r, c;
//
//	// ȭ�� �����
//	system("cls"); //�ܼ� ȭ���� �����(printf �� �ٽ� printf �ϱ� ���� Ŭ����)
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