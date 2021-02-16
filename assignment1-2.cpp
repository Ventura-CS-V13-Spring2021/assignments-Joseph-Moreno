#include <iostream>
using namespace std ;

int main()

{
  int faren ; 
  int celsiuss ; 

  cout << "Whats the tempertue in celsius?" ; 
  cin >> celsiuss ;

  faren = celsiuss * 9/5 + 32 ;
  cout  << faren <<  " is the fahrenheit temperture and the celsius temperture is  "<<celsiuss << endl ;

}