#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);

	printf("x = %d\n", x);
	printf("(1 << 2) = %d\n", 1 << 2);
	printf("아래 4자리 = %d\n", x & 15);
}