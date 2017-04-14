#include <iostream>

template<class T1, class T2>
T2 GetMax(T1 a, T2 b)
{
	T2 buf;

	if (a > b)
	{
		buf = (T2)a;
	}

	else
	{
		buf = (T2)b;
	}

	return buf;
}

int main3()
{
	int n1 = 1, n2 = 31;
	double r1 = 1.5, r2 = 3.5;
	double  ret1, ret2;


	ret1 = GetMax<int, double> (n1, n2);
	ret2 = GetMax<double, int> (r1, r2);

	std::cout << "test3 : " << std::endl;
	std::cout << ret1 << std::endl;
	std::cout << ret2 << std::endl;

	return 0;
}