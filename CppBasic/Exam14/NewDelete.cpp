/*
C������ �����Ҵ��� ������ ����
- �Ҵ��� ����� ������ ������ ����Ʈ ũ������� �����ؾ� �Ѵ�.
- ��ȯ���� void�� �������̱� ������ ������ �� ��ȯ�� ���ľ� �Ѵ�.
- �����ڰ� ȣ����� �ʴ´� ***
*/

#include<iostream>
#include<string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAddr1(int len)
{
	char * str = (char*)malloc(sizeof(char)*len);

	return str;
}

int main1(void)
{
	char * str = MakeStrAddr1(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	
	free(str);
	return 0;
}

/*
C������ �����Ҵ��� ������ ����
- �Ҵ��� ����� ������ ������ ����Ʈ ũ������� �����ؾ� �Ѵ�.
- ��ȯ���� void�� �������̱� ������ ������ �� ��ȯ�� ���ľ� �Ѵ�.
- �����ڰ� ȣ����� �ʴ´� ***
*/