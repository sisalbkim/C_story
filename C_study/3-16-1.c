#include <stdio.h>

void main()
{
	int x,y;

	printf("입력진수 결정 : 1 = 10진수 2 = 16진수 3 = 8진수 :");
	scanf("%d",&x);

	printf("값 입력 : ");
	if (x == 1) scanf("%d", &y);
	else if (x == 2) scanf("%x", &y);
	else scanf("%o", &y);

	printf("10진수 ==> %d \n 16진수 ==> %x \n 8진수 ==> %o \n", y, y, y);

}

