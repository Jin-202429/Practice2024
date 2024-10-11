#include <stdio.h>

int main()
{
	/*
	int numbers[10];
	int min, max;

	printf("10개의 숫자를 입력 : \n");

	for (int i = 0; i < 10; i++) {
		printf("숫자 %d: ", i + 1);
		scanf_s("%d", &numbers[i]);

		if (i == 0) {
			max = min = numbers[i];
		}
		else {
			if (numbers[i] > max) {
				max = numbers[i];
			}
			if (numbers[i] < min) {
				min = numbers[i];
			}
		}
	}
	printf("가장 큰 값: %d\n", max);
	printf("가장 작은 값: %d\n", min);
	*/

	int a[10];
	int max, min;

	printf("10개의 숫자 입력 : ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	max = min = a[0];
	for (int i = 1; i < 10; i++) {
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("max = %d, min = %d\n", max, min);
}