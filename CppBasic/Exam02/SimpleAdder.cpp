#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력: ";
	std::cin >> val1;
	
	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;	// C++에서는 변수의 선언 위치에 제한을 두지 않는다.

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	return 0;
}