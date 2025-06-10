#include <stdio.h>

void main()
{
	FILE *wfp;
	int i,j;

	wfp = fopen("c:\\c_study\\gugu.txt","w");

	for (i = 0; i <=9; i++)
	{
		for (j = 2; j <=9; j++)
		{
			if(i == 0)
			{
				fprintf(wfp,"#Á¦ %d´Ü# ",j);
			}
			else if (i == 1)
			{
				fprintf(wfp," ");
			
			}
			else 
			{
				fprintf(wfp," %dX %d=%2d ",j,i,i*j);
			}
		}fprintf(wfp,"\n");
	}
	fclose(wfp);
}

