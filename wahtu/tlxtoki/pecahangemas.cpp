#include <iostream>
using namespace std;

int main()
{
    unsigned long long int a, b, c, d;
    scanf("%llu %llu", &a, &b);
    scanf("%llu %llu", &c, &d);
    if ((a * d) > (b * c))
    {
        printf("lebih besar");
    }
    if ((a * d) < (b * c))
    {
        printf("lebih kecil");
    }
    if ((a * d) == (b * c))
    {
        printf("sama");
    }
    return 0;
}