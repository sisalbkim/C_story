#include <stdio.h>

void main()
{
	int x,y;

	printf("�Է����� ���� : 1 = 10���� 2 = 16���� 3 = 8���� :");
	scanf("%d",&x);

	printf("�� �Է� : ");
	if (x == 1) scanf("%d", &y);
	else if (x == 2) scanf("%x", &y);
	else scanf("%o", &y);

	printf("10���� ==> %d \n 16���� ==> %x \n 8���� ==> %o \n", y, y, y);

}

