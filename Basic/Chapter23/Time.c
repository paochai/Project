//100���� 1�� ������ �ð��� ���
#pragma warning(disable:4996) //4996��� �޽��� ��� ����

#include <time.h>	//clock, time, localtime
#include <stdio.h>	//printf
#include <conio.h>	//kbhit
#include <Windows.h>//SetConsolCursorPostion

void print_time(struct tm *now, int tail)
{
	COORD CursorPosition = { 0, 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);

	//���� �ð��� ���
	printf("%2d�� %2d�� %2d�� %2d\n",
		now->tm_hour, now->tm_min, now->tm_sec, tail);
}

int main23(void)
{
	clock_t sclock, nclock;	//sclock:����, nclock:����(1/1000�� �ð�)
	time_t seconds;	//�ʴ��� �ð�
	struct tm *now; //date time �ð�
	int tail = 0;

	printf("���Ḧ ���Ͻø� �ƹ�Ű�� ��������. \n");

	sclock = clock();			//���� clock�� ���մϴ�.
	time(&seconds);				//�ʴ��� �ð��� ���մϴ�.
	now = localtime(&seconds);	//date time �ð��� ���մϴ�.
	print_time(now, tail);		//���� �ð��� ���


	while (1)
	{
		if (kbhit())//Ű�� ������
		{
			break;//�ݺ��� Ż��
		}

		nclock = clock();

		if (nclock - sclock >= (CLOCKS_PER_SEC / 100))//clock/100�ʿ� ũ�ų� ������
		{
			tail++;
			if (tail == 100)//1�ʰ� ������
			{
				tail = 0;
				sclock = clock();
				time(&seconds);//�ʴ��� �ð��� ���մϴ�.
				now = localtime(&seconds);//date time �ð��� ���մϴ�.
			}
			print_time(now, tail); //���� �ð��� ���
		}
	
	}
		printf("���α׷��� �����մϴ�.\n");

		return 0;
}
