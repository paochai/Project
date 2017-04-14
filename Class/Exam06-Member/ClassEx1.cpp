// 클래스 : 멤버 변수, 함수의 선언

#include <iostream>

using namespace std;

class OrangeBox1
{
private:

	int total;

public:

	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal();
};	// 세미콜론을 잊으면 안됨.

int main1()
{
	return 0;
}