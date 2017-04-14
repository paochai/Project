#include <stdio.h>

int main1(void)
{
	FILE* fp = fopen("data.txt", "wt");		// 현재 디렉터리는 실행파일이 저장된 디렉터리이거나 프로젝트 파일이 저장된 디렉터리이다.
	
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;		// 비정상적 종료를 의미하기 위해서 -1을 반환한다.
	}

	fputc('A', fp);	// fput'c'로 받아서 엔터값을 입력받지 못하기 때문에 개행이 이뤄지지 않는다.
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);		// 스트림의 종료(오픈 후에 클로즈 필수).
	
	return 0;
}