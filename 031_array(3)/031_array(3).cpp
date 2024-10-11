#include <stdio.h>

int main() {
    int arr[10];  
    int sum = 0;  

    // [10번에 1번]
    printf("10개의 숫자를 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
        if (i % 2 == 0) {+
            sum += arr[i];
        }
    }
    printf("짝수 인덱스의 합 : %d\n", sum);
    
    // [10번에 2번]
    printf("10개의 숫자를 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
        if (i % 2 != 0) {
            sum += arr[i];
        }
    }
    printf("홀수 인덱스의 합 : %d\n", sum);

    // [10번에 3번]
    printf("10개의 숫자를 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("짝수의 합 : %d\n", sum);

    // [10번에 4번]
    printf("10개의 숫자를 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    printf("홀수의 합 : %d\n", sum);
}
