#include <stdio.h>

void main()
{
	int hap = 0;
	int a,b,c;
	int i = 0;

	printf("합계의 시작값 ==> ");
		scanf("%d",&a);

	printf("합계의 끝값 ==> ");
		scanf("%d",&b);

	printf("배수 ==> ");
		scanf("%d",&c);



	for (i=a; i <= b; i= i+c)
	{
		hap = hap + i;
	}
	printf("%d 부터 %d까지의 %d배수의 합계 ==> %d \n",a,b,c,hap);
}



