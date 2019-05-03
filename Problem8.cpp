#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int a,b;

cout << "Enter a number: "<< endl;
cin >> a;
cout << "Multiplication table of " << a << " : " <<endl;
for (b=1; b<=10; b++)
{
cout << a;
cout << " * ";
cout << b;
cout << " = ";
cout << a*b;
cout << "\n";
}
return 0; 
}
