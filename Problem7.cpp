#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, b, c;
	
	cout << "Enter a Number: ";
	cin >> b;
	
	while (b>0)
	{
		c = 0;
		
	for ( a = 1; a <= b; a++)
	{
		c += a;
	}
		cout << "The sum of all whole numbers from 1 to " 
		<< b << " is " << c << endl;
		cout << "Enter a Number: ";
		cin >> b;
	}
		cout << "Thank you!";
		
	return 0;
}

