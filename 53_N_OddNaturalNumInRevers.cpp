// Write a program to print the first N odd natural numbers in reverse order.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = n; n >= 1; n--)
    {
        cout << (2 * n - 1) << endl;
    }
    return 0;
}