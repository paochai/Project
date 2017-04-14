#include <stdio.h>

int main12(void)
{
	long fpos;
	int i;

	/* 파일 생성 */
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* 파일 개방 */
	fp = fopen("text.txt", "rt");
	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);	//현재 위치 저장
		fseek(fp, -1, SEEK_END);	// 맨 뒤로 이동
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);

	return 0;
}