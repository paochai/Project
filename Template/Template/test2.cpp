#include <iostream>

template<class T>
T GetMax(T a, T b)
{
	T buf;

	if (a > b)
	{
		buf = a;
	}

	else
	{
		buf = b;
	}

	return buf;
}

int main2()
{
	int n1 = 1, n2 = 3, ret1;
	double r1 = 1.5, r2 = 3.5, ret2;

	ret1 = GetMax(n1, n2);
	ret2 = GetMax(r1, r2);

	std::cout << "test2 : " << std::endl;
	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;

	return 0;
}