#include <iostream>
using namespace std;

int main()
{
    unsigned int k;
    cin >> k;
    if (k >= 1000)
    {
        cout << "1000 " << k / 1000 << "\n";
        k = k % 1000;
    }
    if (k >= 500)
    {
        cout << "500 " << k / 500 << "\n";
        k = k % 500;
    }
    if (k >= 200)
    {
        cout << "200 " << k / 200 << "\n";
        k = k % 200;
    }
    if (k >= 100)
    {
        cout << "100 " << k / 100 << "\n";
        k = k % 100;
    }
    if (k >= 50)
    {
        cout << "50 " << k / 50 << "\n";
        k = k % 50;
    }
    if (k >= 20)
    {
        cout << "20 " << k / 20 << "\n";
        k = k % 20;
    }
    if (k >= 10)
    {
        cout << "10 " << k / 10 << "\n";
        k = k % 10;
    }
    if (k >= 5)
    {
        cout << "5 " << k / 5 << "\n";
        k = k % 5;
    }
    if (k >= 2)
    {
        cout << "2 " << k / 2 << "\n";
        k = k % 2;
    }
    if (k >= 1)
    {
        cout << "1 " << k / 1 << "\n";
        k = k % 1;
    }
    return 0;
}
