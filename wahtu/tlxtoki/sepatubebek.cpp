#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<unsigned int> s, b;
    unsigned int n, m;
    scanf("%u %u", &n, &m);
    for (int i = 0; i < n; i++)
    {
        unsigned int x;
        scanf("%u", &x);
        b.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        unsigned int x;
        scanf("%u", &x);
        s.push_back(x);
    }

    sort(s.begin(), s.end());
    sort(b.begin(), b.end());
    int index1 = 0, index2 = 0;
    int hitung = 0;

    while (index1 < n && index2 < m)
    {
        if (b[index1] == s[index2] || b[index1] + 1 == s[index2])
        {
            hitung++;
            index1++;
            index2++;
        }
        else if (b[index1] > s[index2])
        {
            index2++;
        }
        else if (b[index1] < s[index2])
        {
            index1++;
        }
    }
    printf("%d", hitung);

    return 0;
}