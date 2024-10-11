#include <stdio.h>

int main()
{
	int n;

	printf("자연수 n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}

	for (int i = n - 1; i >= 1; i--) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
}