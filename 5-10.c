#include <stdio.h>

void main()
{
	int y;
	
	printf("����⵵�� �Է��ϼ��� :");
	scanf("%d",&y);

	switch (y % 12)
	{
		case 0 : printf ("��� \n"); break;
		case 1 : printf ("��� \n"); break;
		case 2 : printf ("���� \n"); break;
		case 3 : printf ("��� \n"); break;
		case 4 : printf ("�����̶� \n"); break;
		case 5 : printf ("�߶� \n"); break;
		case 6 : printf ("���� \n"); break;
		case 7 : printf ("������ \n"); break;
		case 8 : printf ("��� \n"); break;
		case 9 : printf ("�Ҷ� \n"); break;
		case 10 : printf ("ȣ���̶� \n"); break;
		case 11 : printf ("�䳢�� \n"); break;
	}
}
		
