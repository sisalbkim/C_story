#include <stdio.h>

void gugu(int a, int b)
{
	printf("%d X %d = %2d\n", a, b, a*b);
}
void main()
{
	int c;

	printf("����ϰ� ���� ���� �Է� : ");
	
	scanf("%d", &c);
	
	for (int i = 1; i<=9; i++){
		gugu(c,i);
	}
}

