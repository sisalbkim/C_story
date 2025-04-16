#include <stdio.h>

void main()
{

	int hap = 0;
	int i;
	int a , b , c ;

	printf("시작값,최종값,증가값을 순서대로 입력하시오 : ");
	scanf("%d %d %d",&a , &b , &c);

	for( i = a; i <= b ; i = i+c){
		hap = hap + i;
	}

	printf("%d에서 %d까지 %d씩 증가했을때의 합 = %d",a,b,c,hap);
}

