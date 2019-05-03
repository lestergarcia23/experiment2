#include <iostream>
#include <conio.h>
using namespace std;
 
int main ()
{
    int a, b, c, d, e, H, E;
    char Package;
    
    cout << "A.) For 995 per month, 10 hours of access provided. Additional hour is 20/Hr. " << endl;
	cout << "B.) For 1495 per month, 20 hours of access provided. Additional hour is 10/Hr. " << endl;
	cout << "C.) For 1995 per month, Unlimited access provided. " << endl;
cout << " "<< endl;
    cout << "Enter the Chosen package= " <<  endl;
	cin >> Package;
	cout << "Enter Hours of Access= " <<  endl;
	cin >> H;
	
   switch (Package)
   {
      case 'A' :
         if ( H <= 10)
        {
            a= 995;
        cout << "Total amount Due:" << " " << "P "<< a << endl;
		}
		else
		{
		
			d = ( H - 10) * 20;
			a= 995 + d ;
       cout << "Total amount Due: "  << "P "<< a << endl;
         break;
    	}
      case 'B' :
      	
         if ( H <= 20)
        {
         	b= 1495;
        cout << "Total amount Due:" << "P "<< b << endl;
    	}
		else
		{
		e = (H-20) * 10;
		b= 1495 + e;
        cout << "Total amount Due: " << "P "<< b << endl;
    	}
         break;
         
      case 'C' :
      	  c= 1995;
    	cout << "Total amount Due: " << "P "<< c <<endl;
         break;
      
      default :
         cout << "Invalid Choice" <<endl;
   }

 
   return 0;
}
