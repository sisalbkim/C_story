#include <stdio.h>

void main()
{
	int hap = 0;
	int a,b,c;
	int i = 0;

	printf("�հ��� ���۰� ==> ");
		scanf("%d",&a);

	printf("�հ��� ���� ==> ");
		scanf("%d",&b);

	printf("��� ==> ");
		scanf("%d",&c);



	for (i=a; i <= b; i= i+c)
	{
		hap = hap + i;
	}
	printf("%d ���� %d������ %d����� �հ� ==> %d \n",a,b,c,hap);
}



