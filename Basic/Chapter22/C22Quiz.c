#include<stdio.h>

int main22(void)
{
	int num[100] = { 0 };
	int i = 0;
	int j = 0;
	int* ptr = num;

	printf("������ �Է��ϼ���. (-1�� �Է��� ������)\n");
	
	for(; i < 100; i++)
	{
		scanf("%d", &num[i]);
		
		if (num[i] == -1)	// -1���� �迭�� ��������.
		{
			break;
		}
		printf("%d\n", num[i]);

	}

	//for (; j < )

		// ptr ���� �� *ptr �̿��ؼ� �� ������ ���ϱ�
		// ���� for�� ���� �� if( num[i] > num[i+1] )
		// num [i] = num[i+1]
		// num [i+1] = num[i]
		// else
		// break;
		
	return 0;
}