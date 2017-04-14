// 멤버함수의 정의(구현) : 안쪽에, 바깥쪽에(class::필요)

#include <iostream>

using namespace std;

class OrangeBox2
{
private:

	int total;

public:

	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal()
	{
		return total;	// <-- 멤버 함수의 정의
	}

};

void OrangeBox2::Add(int num)
{
	total += num;
}

int main2()
{
	return 0;
}