#include <iostream>

int main4(void)
{
	char name[100];		// 문자열의 입력 방식도
	char lang[200];
	
	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;	// 다른 데이터의 입력방식과 큰 차이가 나지 않는다.

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

	return 0;
}