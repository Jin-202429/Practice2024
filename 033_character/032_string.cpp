// #define _CRT_SERCURE_NO_WARINGS 이걸 쓰면 그냥 scanf("%s",s ); 라고 쓰면 되는데 10개 숫자를 입력하면 밑에서 에러가 발생하므로 scanf_s라 쓰는 것이 좋다.
#include <stdio.h>
int main()
{
	char s[10]; // 9개까지만 출력 가능, 마지막 문자는 널문자로 남겨두어야함, 10개 문자를 찍으면 입력을 받지 않음
	
	printf("문자열 입력 : ");
	scanf_s("%s", s, sizeof(s)); // 문자열을 읽을 때는 string을 줄여 %s를 사용, 문자열은 &(and) 표시가 없음, 배열의 문자 이름만 적어주면 됌
	// sizeof(s)를 꼭 써야한다

	for (int i = 0; s[i] != '\0'; i++)
		printf("%c\n", s[i]);
}