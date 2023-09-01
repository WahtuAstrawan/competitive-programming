#include <stdio.h>

int main()
{
    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);
    total = a + b + c;
    if (a == (total / 7) * 4)
    {
        printf("YA");
    }
    else if (b == (total / 7) * 4)
    {
        printf("YA");
    }
    else if (c == (total / 7) * 4)
    {
        printf("YA");
    }
    else
    {
        printf("TIDAK");
    }
    return 0;
}