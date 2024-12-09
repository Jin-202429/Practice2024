#include <stdio.h>

int main()
{
	int x;

	scanf_s("%d", &x);

	printf("x = %d\n", x);
	
	for(int i = 1; i <= 4; i++)
		printf("%d번 시프트 : %d\n", i, x << i);
}