#include <stdio.h>

void main()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;
	struct student *p;

	p = &s;

	printf("이름 입력 : ");
	scanf("%s", p -> name);

	printf("국어 점수 : ");
	scanf("%d", &p -> kor);

	printf("영어 점수 : ");
	scanf("%d", &p -> eng);

	p -> avg = (p -> kor + p -> eng) / 2.0;

	printf("\n ---구조체 포인터 활용 --- \n");
	printf("학생 이름 ==> %s\n", p -> name);
	printf("국어 점수 ==> %d\n", p -> kor);
	printf("영어 점수 ==> %d\n", p -> eng);
	printf("평균 점수 ==> %5.1f\n", p -> avg);
}

