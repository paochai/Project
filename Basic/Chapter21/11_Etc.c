#include <stdio.h>
#include <stdlib.h>

int main11(void)
{
	char str[20];
	
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));
	
	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));

	return 0;
}


// 위의 함수들을 모른다면 문자열에 저장된 숫자 정보를 int형 또는 
// double형으로 변환하는 일은 번거로우 일이 될 수 있다. 