#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};
	
	
	int a,i;

	printf("�Է��� �л� �� : ");
	scanf("%d",&a);

	struct student *p;


	p = (struct student*) malloc(sizeof(struct student)*a);
	
	for(i = 0 ; i < a ; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d",&p[i].name,&p[i].age);
	}

	printf("\n--�л� ��� --\n");
	for(i = 0 ; i < a ; i++)
	{
		printf("�̸� : %s , ���� : %d\n",p[i].name,p[i].age);
	}
	free(p);
}
