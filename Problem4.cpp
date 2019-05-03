#include <iostream>
#include <conio.h>
using namespace std;
 
int main ()
{
    float a, b, c;
    
    cout << "Enter the First number= " <<  endl;
	cin >> a;
	cout << "Enter the Second number= " <<  endl;
	cin >> b;
	cout << "Enter the Third number= " <<  endl;
	cin >> c;
	
	 if (( a >= c  &&  a >= b ))
        {
        cout << "The LARGEST number is:" << " "<< a << endl;
    	}
	else  if (( b >= c  &&  b >= a ))
		{
        cout << "The LARGEST number is:" << " "<< b << endl;
    	}
    else   
		{
        cout << "The LARGEST number is:" << " "<< c << endl;
    	}
  
   return 0;
}
