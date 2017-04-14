#include <stdio.h>
// #define STNUM(Y, S, P) YSP
// #define STNUM(Y, S, P) Y S P

#define STNUM(Y, S, P)	((Y)*100000+(S)*1000+(P))

int main10(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));
	printf("학번: %d \n", STNUM(10, 65, 075));	// 실행결과를 보면 1065075로 치환이 이뤄지지 않았음을
	// 알 수 있다. 이는 075가 8진수로 해석된 결과이다. 따라서 이 경우에는 다음과 같이 문장을 구성해야 한다.
	//printf("학번; %d \n", STNUM(10, 65, 75));


	return 0;
}

// 필요한 형태대로 단순 결합 : ## 연산자
// #define STNUM(Y, S, P)  Y ## S ## P