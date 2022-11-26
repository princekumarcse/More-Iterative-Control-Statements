// Write a program to print the first N natural numbers in reverse order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    for (n; n > 0; n--)
    {
        cout << n << endl;
    }
    return 0;
}