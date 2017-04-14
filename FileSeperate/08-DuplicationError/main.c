#include <stdio.h>
#include "stdiv.h"
#include "intdiv3.h"

int main8(void)
{
	Div val = IntDiv(5, 2);

	printf("¸ò: %d \n", val.quotient);
	printf("³ª¸ÓÁö: %d \n", val.remainder);

	return 0;
}