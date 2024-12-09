#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);

	printf("x = %d\n", x);
	printf("(1 << 2) = %d\n", 1 << 2);
	printf("%d\n", x & (1 << 2));  // 10이 1010이므로 결과값이 0
}