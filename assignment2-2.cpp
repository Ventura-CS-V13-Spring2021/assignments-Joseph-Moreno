#include <iostream>
using namespace std;
int main()
{
     int num1, num2, num3;
     cout << "Enter three integer values : " ;
     cin >> num1 >> num2 >> num3 ;
      if (num1 == num2 && num1 == num3 && num2 == num3) 
        cout << "all numbers are the same" << endl ;
      else if (num1 != num2 && num2 != num3 && num1 != num3)
        cout << "all numbers are distinct" << endl ;
      else if (cout << "there are two duplicated numbers" << endl) ;
	  // Looks good, but when the two numbers are same, 
	  // we need to figure out which numbers are same each other.
	  
     return 0;
}