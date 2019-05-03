#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    int a;
    bool b= true;
    
   do
   {	 
   if(a >= 1)
{
    cout << "Enter a number:" << endl;
    cin >> a;
    cout << "The sum of all whole numbers from 1 to " << a << " is " << (a * (a + 1)) / 2 << "."<< endl;
	cout << "\n\n";
    continue;        
}
   else 
    cout << "Thank you!";
    cout <<"\n";
    break;
} 
while ( !b );

    return 0;
}

