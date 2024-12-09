#include <stdio.h>

/*
void rec(int n) {
	if (n > 5)
		return;
	printf("n = %d\n", n);
	rec(n + 1);
}

int main()
{
	rec(1);
}
*/

long long fact(long long n)
{
	if(n == 1)
		return 1;
	return fact (n - 1) * n;
}

int main()
{
	//반복문
	long long f = 1;  // 곱해나가는 수이므로 1로 초기화 (더해나간다면 0으로 초기화)
	for (int i = 1; i <= 20; i++) {  // 20팩토리얼 까지만 계산가능
		f = 1;
		for (int j = 1; j <= i; j++)
			f *= j;
		printf("%d! = %11d\n", i, f);
	}

	//재귀함수를 사용
	for (int i = 1; i <= 20; i++)
		printf("%d! = %11d\n", i, fact(i));
}