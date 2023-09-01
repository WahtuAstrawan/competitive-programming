#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned short int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << i + 1;
            break;
        }
        else
        {
            cout << i + 1 << "+";
        }
    }
    return 0;
}