#include<stdio.h>

int main()
{
        // È­¾¾ ¿Âµµ ¹è¿­
        float F[] = { 100.0, 80.0, 60.0 };
        float C;
        int i;

        printf("È­¾¾\t\t¼·¾¾\n");
        printf("=====================\n");

        // °¢ È­¾¾ ¿Âµµ¸¦ ¼·¾¾·Î º¯È¯ÇÏ¿© Ãâ·Â
        for (i = 0; i < 3; i++) {
            C = (5.0 / 9.0) * (F[i] - 32.0);
            printf("%.1f\t\t%.1f\n", F[i], C);
        }

        return 0;
    }

