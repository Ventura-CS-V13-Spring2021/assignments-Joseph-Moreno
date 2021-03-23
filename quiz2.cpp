#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()
{

     int num1, num2, num3;
     cout << "Enter three integer values in range from 0 to 99: " ;
     cin >> num1 >> num2 >> num3 ;
      if (num1 == num2 && num1 == num3 && num2 == num3) 
        cout << "all numbers are the same " << num1 << num2 << num3 << endl ;
      else if (num1 != num2 && num2 != num3 && num1 != num3)
        cout << "all numbers are distinct" << endl ;
      else if (cout << "there are two duplicated numbers" << endl) ;

}



