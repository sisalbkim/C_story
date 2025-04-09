#include <stdio.h>

void main()
{
	int y;
	
	printf("Ãâ»ı³âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä :");
	scanf("%d",&y);

	switch (y % 12)
	{
		case 0 : printf ("¿ë¶ì \n"); break;
		case 1 : printf ("¹ì¶ì \n"); break;
		case 2 : printf ("¸»¶ì \n"); break;
		case 3 : printf ("¾ç¶ì \n"); break;
		case 4 : printf ("¿ø¼şÀÌ¶ì \n"); break;
		case 5 : printf ("´ß¶ì \n"); break;
		case 6 : printf ("°³¶ì \n"); break;
		case 7 : printf ("µÅÁö¶ì \n"); break;
		case 8 : printf ("Áã¶ì \n"); break;
		case 9 : printf ("¼Ò¶ì \n"); break;
		case 10 : printf ("È£¶ûÀÌ¶ì \n"); break;
		case 11 : printf ("Åä³¢¶ì \n"); break;
	}
}
		
