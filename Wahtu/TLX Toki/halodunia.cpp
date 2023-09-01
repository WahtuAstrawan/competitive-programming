#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    char banding[10] = {'h', 'a', 'l', 'o', ' ', 'd', 'u', 'n', 'i', 'a'};
    int hasil = 0;
    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    for (int i = 0; i < 10; i++)
    {
        if (input[i] == banding[i])
        {
            hasil++;
        }
        else
        {
            continue;
        }
    }
    cout << hasil;
    return 0;
}