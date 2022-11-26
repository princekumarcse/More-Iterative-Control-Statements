// Write a program to print the first N even natural numbers in reverse order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 2 * n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << i <<endl;
        }
    }
    return 0;
}