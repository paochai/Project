#include <stdio.h>

int main3(void)
{
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('A', fp);	// 문자 A와 B가 fp가 가리키는 파일에 저장
	fputc('B', fp);
	fputs("My name is Hong \n", fp);	// 두 개의 문자열이 fp가 가리키는 파일에 저장
	fputs("Your name is Yoon \n", fp);
	fclose(fp);

	return 0;
}

// 쓰기에서 fputc로 받기 때문에 개행이 되지 않지만, 읽기에선 \n을 넣었기 때문에 실제 메모장 텍스트와는 다르게 보인다.