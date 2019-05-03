#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b = 0, c = 1, d = 0;

    cout << "Enter the number of terms: ";
    cin >> a;

    cout << "Fibonacci Series:";

    for (int i = 1; i <= a; ++i)
    {
        if(i == 1)
        {
            cout << "" << b;
            continue;
        }
        if(i == 2)
        {
            cout << c << ",";
            continue;
        }
        d = b + c;
        b = c;
        c = d;
        
        cout << d << ",";
    }
    return 0;
}
