#include<stdio.h>

int main()
{
	float weight, height;

	printf("������(kg) : ");
	scanf_s("%f", &weight);

	printf("Ű(cm) : ");
	scanf_s("%f", &height);

	height /= 100; // m ������ ��ȯ

	float bmi = weight / (height * height);
	printf("bmi :  %.1f", bmi); 
}