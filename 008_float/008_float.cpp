#include<stdio.h>

int main()
{
	float a = 9.80;
	float b = 3.14;
	float add = a + b;
	float sub = a - b;
	float mul = a * b;
	float div = a / b;

	printf("%.2f + %.2f = %.2f\n", a, b, add);
	printf("%.2f - %.2f = %.2f\n", a, b, sub);
	printf("%.2f * %.2f = %.2f\n", a, b, mul);
	printf("%.2f / %.2f = %.2f\n", a, b, div);
}