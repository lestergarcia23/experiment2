#include <iostream>
#include <conio.h>
using namespace std;
 
int main ()
{
	cout << "Counting..." << endl;
  for (int i = 1; i <= 10 ; i++)
   {
   	 cout << i << "," ;
  if (i >= 10)
  {
  	for ( i = 12 ; i <= 30 ; i += 2 )
  	 cout << i << ",";
  }
   }
   return 0;
   
}
