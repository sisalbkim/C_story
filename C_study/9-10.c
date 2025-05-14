#include <stdio.h>

void main()
{
	int a;
	int b;
	int *p1;
	int *p2;
	int tmp;

	printf("a,b값을 입력하시오.\n");
	scanf("%d %d", &a, &b);
	printf("a값 입력 : %d \n", a);
	printf("b값 입력 : %d \n", b);
        
	p1 = &a;
	p2 = &b;

	tmp = *p1;
        *p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d \n",a , b);
}

        
	
