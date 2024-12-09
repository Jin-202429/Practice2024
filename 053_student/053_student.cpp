#include <stdio.h>

struct student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

int main() 
{
	student s;

	printf("학과 : ");
	scanf_s("%s", s.dept, 20);  // 구조체에서는 문자의 개수를 맨뒤에 쓴다.
	printf("학년 : ");
	scanf_s("%d", &s.year);
	printf("학번 : ");
	scanf_s("%d", &s.id);
	printf("이름 : ");
	scanf_s("%s", s.name, 20);
	printf("전화번호 : ");
	scanf_s("%s", s.phone, 20);
	printf("\n");

	printf("학과 : ");
	printf("%s\n", s.dept);
	printf("학년 : ");
	printf("%d\n", s.year);
	printf("학번 : ");
	printf("%d\n", s.id);
	printf("이름 : ");
	printf("%s\n", s.name);
	printf("전화번호 : ");
	printf("%s\n", s.phone);
}
	