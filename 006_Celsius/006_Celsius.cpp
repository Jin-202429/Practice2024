#include<stdio.h>

int main()
{
        // ȭ�� �µ� �迭
        float F[] = { 100.0, 80.0, 60.0 };
        float C;
        int i;

        printf("ȭ��\t\t����\n");
        printf("=====================\n");

        // �� ȭ�� �µ��� ������ ��ȯ�Ͽ� ���
        for (i = 0; i < 3; i++) {
            C = (5.0 / 9.0) * (F[i] - 32.0);
            printf("%.1f\t\t%.1f\n", F[i], C);
        }

        return 0;
    }

