#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x, hasil = 0;
    scanf("%d %d", &n, &m);
    int a[2000] = {0};
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        a[x] += 1;
        a[x] = a[x] % 4;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (a[i] >= 2 && a[i] < 4)
        {
            hasil++;
        }
    }
    printf("%d", hasil);
    return 0;
}
