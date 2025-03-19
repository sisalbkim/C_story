#include <stdio.h>
void main()
{
	int  a,b ;
	float  c, d;

	a = 100;
	b = a; /*b에 a를 대입함 */

	c = 111.1f;
	d = c; /*d에 c값을 대입함 */

	printf("a, b의 값 ==> %d, %d \n",a ,b);
	printf("c, d의 값 ==> %5.1f , %5.1f \n",c ,d);
}


