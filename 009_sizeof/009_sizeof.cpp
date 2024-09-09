#include<stdio.h>

int main()
{

	char a; int b; short c; long d; long long e; float f; double g;
	printf("char %d\n", sizeof(a));
	printf("int %d\n", sizeof(b));
	printf("short %d\n", sizeof(c));
	printf("long %d\n", sizeof(d));
	printf("long long %d\n", sizeof(e));
	printf("float %d\n", sizeof(f));
	printf("double %d\n", sizeof(g));
}