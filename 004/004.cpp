#include<stdio.h>

int main()
{
	char ch = 'A';  // ���ڴ� ���� ����ǥ
	char str[20] = "Hello World!";  // ���ڿ��� ū ����ǥ
	float flt = 10.234; // �Ҽ����� �ִ� ������ ����� �� float ������ ����
	int no = 150;
	double dbl = 20.123456; // float���� �� �����ϰ� ������ double�� ���� (double�� ������ �Ҽ���)
	
	printf("Character is %c\n", ch);
	printf("String is %s\n", str);
	printf("Floating Value is %f\n", flt);
	printf("Integer Vakue is %d\n", no);
	printf("Double Value is %1f\n", dbl);
	printf("Octal Value is %o\n", no);
	printf("Hexadecimal Value is %x\n", no);
}