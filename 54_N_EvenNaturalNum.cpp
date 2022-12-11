//Write a program to print the first N even natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (2 * i) << endl;
    }
    return 0;
}