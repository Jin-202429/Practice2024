#include<stdio.h>

int main()
{
	char ch = 'A';  // 문자는 작은 따옴표
	char str[20] = "Hello World!";  // 문자열은 큰 따옴표
	float flt = 10.234; // 소수점이 있는 변수를 사용할 때 float 변수를 쓴다
	int no = 150;
	double dbl = 20.123456; // float보다 더 정밀하게 쓸려면 double을 쓴다 (double은 정밀한 소수점)
	
	printf("Character is %c\n", ch);
	printf("String is %s\n", str);
	printf("Floating Value is %f\n", flt);
	printf("Integer Vakue is %d\n", no);
	printf("Double Value is %1f\n", dbl);
	printf("Octal Value is %o\n", no);
	printf("Hexadecimal Value is %x\n", no);
}