#include <stdio.h>

void main()
{

	int x, y;


	printf("�Է����� ���� <1>10���� <2> 16���� <3> 8���� :");
	scanf("%d", &x);
	printf("�� �Է� : ");
	if (x == 1){
	scanf("%d", &y);
	}

	else if (x == 2){
	scanf("%x", &y);
	}
	else{
	scanf("%o", &y);
	}
	if (x == 1){
		printf("10���� ==> %d \n", y);
		printf("16���� ==> %x \n", y);
	        printf("8���� ==> %o \n", y);
	}
		else if (x == 2){
		printf("10���� ==> %d \n", y);
		printf("16���� ==> %x \n", y);
		printf("8���� ==> %o \n", y);
		}
		else {
		printf("10���� ==> %d \n", y);
	        printf("16���� ==> %x \n", y);
	        printf("8���� ==> %o \n", y);
		}
}

