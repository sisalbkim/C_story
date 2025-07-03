#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};
	
	
	int a,i;

	printf("입력할 학생 수 : ");
	scanf("%d",&a);

	struct student *p;


	p = (struct student*) malloc(sizeof(struct student)*a);
	
	for(i = 0 ; i < a ; i++)
	{
		printf("이름과 나이 입력 : ");
		scanf("%s %d",&p[i].name,&p[i].age);
	}

	printf("\n--학생 명단 --\n");
	for(i = 0 ; i < a ; i++)
	{
		printf("이름 : %s , 나이 : %d\n",p[i].name,p[i].age);
	}
	free(p);
}
