#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, output;
    char input[1];
    scanf("%d %c %d", &a, &input, &b);
    if (input[0] == '+')
    {
        output = a + b;
        printf("%d", output);
    }
    else if (input[0] == '-')
    {
        output = a - b;
        printf("%d", output);
    }
    else if (input[0] == '*')
    {
        output = a * b;
        printf("%d", output);
    }
    else if (input[0] == '<' && a < b)
    {
        printf("benar");
    }
    else if (input[0] == '<' && a > b)
    {
        printf("salah");
    }
    else if (input[0] == '>' && a > b)
    {
        printf("benar");
    }
    else if (input[0] == '>' && a < b)
    {
        printf("salah");
    }
    else if (input[0] == '=' && a == b)
    {
        printf("benar");
    }
    else if (input[0] == '=' && a != b)
    {
        printf("salah");
    }
    return 0;
}