#include <iostream>

using namespace std;

int main10(void)
{
	int num1 = 1020;
	int &num2 = num1;	// num2는 num1의 참조자이다. 따라서 이후부터는 num1으로 하는
	num2 = 3047;		// 모든 연산은 num2로 하는것과 동일한 결과를 보인다.

	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;
}

// VAL: 3047
// REF: 3047
// VAL: 0012FF60
// REF: 0012FF60
//
// 할당된 하나의 메모리 공간에 둘 이상의 이름을 부여할 수는 없을까?
// - 변수에 별명(별칭) 하나 붙여주는 것이다.
//
// 이미 선언된 변수의 앞에 &연산자가 오면 주소 값의 반환을 명령하는 뜻이 되지만,
// 새로 선언되는 변수의 이름 앞에 등장하면, 이는 참조자의 선언을 뜻하는 게 된다.
// - 참조자는 변수를 대상으로만 선언이 가능하다.
// - 일단 선언이 되고 나면, 변수와 차이가 없다.