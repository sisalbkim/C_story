#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p, *s;
	int i,j;

	printf("malloc() �Լ� ��� \n");
	p = (int *) malloc(sizeof(int) *3);

	for (i=0 ; i<3; i++)
	
		printf("�Ҵ�� ���� �ʱⰪ p[%d] ==> %d\n", i, p[i]);

	free(p);

	printf("\ncalloc() �Լ� ��� \n");
	s = (int *) calloc(5,sizeof(int));

	for (j=0; j<5; j++)
		printf("�Ҵ�� ���� �ʱⰪ s[%d] ==> %d\n", j, p[j]);
}

