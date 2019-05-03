#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
	
using namespace std;
 
int main ()
{
    int  x, y;
    const float z=2.5;
	float V;

    
    cout << "The value of V depends on th values of x and y as follows " << endl;
	cout << "V=xyz" << "            " << "when x=1 and 1<y<5 " <<  endl;
	cout << "V=x+y/z" << "          " << "when x=1 and y>=5 " << endl;
	cout << "V=|(x-y)/z|" << "      " << "when x=2 and y<=5 "<< endl;
	cout << "V=x-yz" << "           " << "when x=2 and y>5 " << endl;
	cout << "V=x+y+z" << "          " << "for other values of x and y "<< endl;
    cout <<  "          " <<  endl;
  
    cout << " Enter Value of x: " <<  endl;
	cin >> x;
	cout << " Enter Value of y: " <<  endl;
	cin >> y;
	
   switch (x)
   {
      case '1' :
         if ( 1<y<5 )
         (V= (x*y*z));
         if ( 1>=5 )
         (V= (x+y/z));
		break;
		
      case '2' :
         if ( y <= 5) 	
        (V= (x-y/z));
         if ( y > 5) 	
        (V= x-(sqrt(y/z)));
         break;

      default :
         (V= x+y+z);
         break;
   }
cout << "V:" << setw(10) << fixed<< setprecision(2) << V;
 
   return 0;
}
