#include <stdio.h>

void gugu(int a, int b)
{
	printf("%d X %d = %2d\n", a, b, a*b);
}
void main()
{
	int c;

	printf("출력하고 싶은 단을 입력 : ");
	
	scanf("%d", &c);
	
	for (int i = 1; i<=9; i++){
		gugu(c,i);
	}
}

