// Write a program to print a table of N.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}