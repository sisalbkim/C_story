#include <stdio.h>

void main()
{
	int a = 99;

	printf("AND연산 : %d \n", (a >=100 ) && (a <= 200));
	printf(" OR 연산 : %d \n", (a >= 100) || (a <= 200));
	printf("NOT 연산 : %d \n", !(a==100));
}

