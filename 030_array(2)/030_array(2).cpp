#include <stdio.h>

int main()
{
    /*
    int arr[10];
    printf("숫자 10개를 입력하시오 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }
    //1,2,3,4,5,6,7,8,9,10 저장
    int max = arr[0]; //max = 1
    int max2 = arr[1]; //max = 2

    for (int i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max2 = max;
            max = arr[i];
        }
        else if (max2 < arr[i] && max != arr[i]) {
            max2 = arr[i];
        }
    }

    printf("가장 큰 값: %d\n", max);
    printf("두 번째로 큰 값: %d\n", max2);
    */

    int a[10];
    int max, max2;

    printf("10개 숫자 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &a[i]);
    }
    
    // max와 second max를 찾아라
    max = max2 = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max2 = max;
            max = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }

    printf("max = %d, max2 = %d\n", max, max2);
}

