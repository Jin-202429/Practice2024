#include <stdio.h>

int main()
{
	// 4장 워크시트

	// 27번에 1번
	int n;

	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	// 27번에 2번
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	// 27번에 3번
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	// 27번에 4번
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++)
			printf("*");
		printf("\n");
	}
     
	// 27번에 5번
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}

	// 27번에 6번
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}   
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
}