#include <stdio.h>

void main()
{
	int a;
	int b;
	int *p1;
	int *p2;
	int tmp;

	printf("a,b���� �Է��Ͻÿ�.\n");
	scanf("%d %d", &a, &b);
	printf("a�� �Է� : %d \n", a);
	printf("b�� �Է� : %d \n", b);
        
	p1 = &a;
	p2 = &b;

	tmp = *p1;
        *p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d \n",a , b);
}

        
	
