void Swap1(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2: %d %d \n", n1, n2);
}

int main3(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d \n", num1, num2);

	Swap1(num1, num2);		// num1�� num2�� ����� ���� ���� �ٲ�� ���
	printf("num1 num2: %d %d \n", num1, num2);
	return 0;
}