// Write a program to print the first N natural numbers.
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter Number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return 0;
}