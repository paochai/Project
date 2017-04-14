#include <iostream>

using namespace std;	// 이름공간 std에 선언된 것은 std라는 이름공간의 선언없이 접근하겠다는 선언.

int main2(void)
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "Wolrd!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;

	return 0;
}