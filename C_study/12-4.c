#include <stdio.h>
#include <malloc.h>

void main()
{
	int *p, *s;
	int i,j;

	printf("malloc() 함수 사용 \n");
	p = (int *) malloc(sizeof(int) *3);

	for (i=0 ; i<3; i++)
	
		printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

	free(p);

	printf("\ncalloc() 함수 사용 \n");
	s = (int *) calloc(5,sizeof(int));

	for (j=0; j<5; j++)
		printf("할당된 곳의 초기값 s[%d] ==> %d\n", j, p[j]);
}

