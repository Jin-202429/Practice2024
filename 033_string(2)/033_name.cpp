#include <stdio.h>
#include <sting.h>

int main()
{
	/*
	int year;
	int id;
	char name[10];

	printf("학년 : ");
	scanf("%d", &year);
	printf("학번 : ");
	scanf_s("%d", &id);
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	printf("%d학년 %d %s", year, id, name);
	*/

	// 문자열을 하나로 연결한 후 출력
	char year[10];
	char id[10];
	char name[10];
	char s[30] = " ";

	printf("학년 : ");
	scanf_s("%s", year, sizeof(year));
	printf("학번 : ");
	scanf_s("%d", id, sizeof(id);
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name)); 

	strcat_s(s, year);
	strcat_s(s, "학년");
	strcat_s(s, id);
	strcat_s(s, " ");
	strcat_s(s, name);
	printf("%d학년 %d %s", year, id, name);
}