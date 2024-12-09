#include <stdio.h>

int main()
{
	enum Fruit {Apple, Banana, Orange};  // 0,1,2에 과일 이름 부착한 것

	Fruit fruit;

	printf("과일 선택(Apple:0, Banana:1, Orange:2) : ");
	scanf_s("%d", &fruit);

	if (fruit == Apple)
		printf("Apple\n");
	else if (fruit == Banana)
		printf("Banana\n");
	else if (fruit == Orange)  
		printf("Orange\n");
}