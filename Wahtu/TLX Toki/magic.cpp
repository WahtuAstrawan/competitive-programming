#include <iostream>

using namespace std;

int main()
{
    unsigned short int k, n;
    cin >> k >> n;
    int kali = k * n;

    cout << "Think of a number, any number\nMultiply it by " << k << "\nAdd " << kali << " to your number\nNow, divide your total by " << k << "\nFinally, subtract the result from the first number you pick\nBRAVO!!!\nYour answer is " << n;

    return 0;
}