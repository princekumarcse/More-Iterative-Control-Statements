// 9. Write a program to print cubes of the first N natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << (i * i * i) << endl;
    }
    return 0;
}