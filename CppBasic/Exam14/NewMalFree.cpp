#include <iostream>
#include <string.h>
#include < stdlib.h>

using namespace std;

char * MakeStrAdr2(int len)
{
	// char *str = (char*)malloc(sizeof(char)*len);
	char * str = new char[len];		// Ű���� new ������, �Ҵ��� ����� ������ ���� ���
	return str;
}

int main2(void)
{
	char * str = MakeStrAdr2(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);
	delete[]str;	// �迭�� ���·� �Ҵ�� �޸� ������ ����
	return 0;

}