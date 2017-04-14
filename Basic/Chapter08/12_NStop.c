#include <stdio.h>
/*
기존코드

main()
{
int s;
s = 85;								// true/false
if (90 <= s <= 100) printf("A");	// 90 <= 85 : false(0), 0 <= 100 : true(1) 따라서 A출력
if (80 <= s < 90)   printf("B");
if (70 <= s < 80)   printf("C");
if (60 <= s < 70)   printf("D");
if (s < 60)         printf("F");	// if(85 < 60) 거짓이라 출력 x
printf("\nstop");

}
*/

main2()
{
	int s;
	s = 85;
	if (90 <= s && s <= 100)	  printf("A");
	else if (80 <= s && s < 90)   printf("B");
	else if (70 <= s && s < 80)   printf("C");
	else if (60 <= s && s < 70)   printf("D");
	else if (s < 60)			  printf("F");
	printf("\nstop");
}