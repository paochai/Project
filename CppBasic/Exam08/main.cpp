#include <iostream>

using std::cin;		// 이후부터cin, cout, endl은 std::cin, std::cout, std::endl을 의미한단 선언.
using std::cout;
using std::endl;

int main1(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}