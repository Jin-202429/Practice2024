#include <stdio.h>

int main() {
	enum Day { 일요일, 월요일, 화요일, 수요일, 목요일, 금요일, 토요일 };

	Day day;

	printf("요일 선택(일요일:0, 월요일:1, 화요일:2, 수요일:3, 목요일:4, 금요일:5, 토요일:6) : ");
	scanf_s("%d", &day);

	if (day == 일요일)
		printf("일요일\n");
	else if (day == 월요일)
		printf("월요일\n");
	else if (day == 화요일)
		printf("화요일\n");
	else if (day == 수요일)
		printf("수요일\n");
	else if (day == 목요일)
		printf("목요일\n");
	else if (day == 금요일)
		printf("금요일\n");
	else if (day == 토요일)
		printf("토요일\n");
}
