#include <stdio.h>

int main7(void)
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin:", "wb");
	
	char buf[20];
	int readCnt;

	if(src == NULL || des == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);
		if (readCnt < sizeof(buf))	// 1. 파일의 끝에 도달해서 buf를 다 채우지 못한 경우에 참이 된다.
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);	// 2. feof 함수호출의 결과가 참이면 파일의 끝에 도달했다는 의미이므로 마지막으로 읽은 데이터를 파일에 저장하고 프로그램을 종료한다.
				puts("파일복사 완료");
				break;
			}

			else
			{
				puts("파일복사 실패");
				break;
			}
		}
		
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	
	return 0;
}