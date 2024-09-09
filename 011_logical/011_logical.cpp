#include<stdio.h>

int main()
{
	int x = 3;
	int y = 4;
  
    bool p = x && y;
    bool q = x || y;
    bool r = !x;
    bool h = !y;

    printf("x && y = %d\n", p);
    printf("x || y = %d\n", q);
    printf("!x = %d\n", r);
    printf("!y = %d\n", h);

        return 0;
 }

