#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// 3 By3 Puzzle

// Ű �Է½� �ʿ�


#define RIGHT 77
#define LEFE  75
#define UP 72
#define DOWN 80




// Ű �� �Է¹ޱ�
int get_directionkey()//����Ű�� �Է¹޴� �Լ�
{
	int key;
	key = _getch();
	if (key == 224)//����Ű
	{
		return _getch(); //� ���� Ű���� ��ȯ
	}
	return 0;	//����Ű�� �ƴ�
}

void print_puzzle(int puzzle[3][3])
{
	int i, j;

	// ȭ�� �����
	system("cls"); //�ܼ� ȭ���� �����(printf �� �ٽ� printf �ϱ� ���� Ŭ����)

	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)

		{

			if (puzzle[i][j])
			{
				printf("%d", puzzle[i][j]);
			}

			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}

}

int is_ending(int puzzle[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < 3; j++)
		{
			if (puzzle[i][j] != i * 3 + j + 1)
			{
				return (i == 2) && (j == 2);
			}
		}
	}

	return 0;
}

int main(void)
{
	int puzzle[3][3] = { { 1, 3, 2}, {7, 8, 4}, {6, 5, 0} };
}

// --------------------
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
//break;	// ����