// Write a program to print the first N natural numbers in reverse order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = n; n >= 1; n--)
    {
        cout << n << endl;
    }
    return 0;
}