#include <stdio.h>
#include <malloc.h>

void main()
{

	int *p;
	int i , hap =0;
	int cnt;

	printf("입력할 개수는? : ");
	scanf("%d",&cnt);

	p = (int*) malloc(sizeof(int) * cnt);

	for(i=0 ; i<cnt ; i++)
	{
		printf("%d 번째 숫자 : ",i+1);
		scanf("%d", p+i);
	}

	for(i=0 ; i<cnt ; i++)
	{
		if (p[i]%2 == 0)
			hap = hap + p[i];
	}

	printf("입력한 짝수합 ==> %d",hap);
}








	

