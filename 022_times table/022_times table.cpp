#include <stdio.h>

int main()
{
    int n;
    printf("입력: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= 9; i++) {
        printf("%dX%d=%d\n", n, i, n * i);
    }
}

