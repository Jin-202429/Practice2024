#include <stdio.h>

int main()
{
    int n;
    
    printf("자연수 입력: ");
    scanf_s("%d", &n);

    int sum1 = 0;
    for (int i = 1; i <= n; i += 2) {
        sum1 += i;
    }
    printf("1부터 %d까지의 홀수의 핪은 : %d\n ", n, sum1);

    int sum2 = 0;
    for (int i = 2; i <= n; i += 2) {
        sum2 += i;
    }
    printf("1부터 %d까지의 짝수의 합은 : %d\n", n, sum2);
}

