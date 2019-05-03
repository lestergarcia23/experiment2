#include <iostream>
#include <conio.h>
using namespace std;
 
int main ()
{
    int a, b;
    
   
    cout << "Enter the usage of water per gallons= " <<  endl;
	cin >> a;
	cout << "Input any Unpaid Balance (if there's none, put 0') = " <<  endl;
	cin >> b;
	
         if ( b > 0 )
        {
 		cout << "Total amount Due:" << 35 + (a * 1.10) + 20<< endl;
		}
	
		else 
		{
 		cout << "Total amount Due:" << 35 + (a * 1.10) << endl;
    	}
      	
         

 
   return 0;
}
