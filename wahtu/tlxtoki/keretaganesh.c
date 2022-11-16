#include <stdio.h>

int main()
{
    unsigned int n, x;
    scanf("%d", &n);
    x = n - 1;
    unsigned int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x == 0)
        {
            printf("%d", arr[x]);
        }
        else
        {
            printf("%d,", arr[x]);
        }
        x -= 1;
    }
}
