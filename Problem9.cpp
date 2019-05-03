#include <iostream>
#include <conio.h>
using namespace std;
int main
()
{
	int a, b, c, d;

	cout << "How many Rows: ";
	cin >> a;
	cout << "How many Columns: "; 
	cin >> b;
for (c = 1; c <= a; c++ )
{
for (d = 1; d <= b; d++ )
{
	if 
	(c == 1 || c == a ||     d == 1 || d == b )
	cout << "*";
	else
	cout << "*";
}
cout << "\n";
}
return 0;
}
