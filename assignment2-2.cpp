#include <iostream>
using namespace std;
int main()
{
     int num1, num2, num3;
     cout << "Enter three integer values : " ;
     cin >> num1 >> num2 >> num3 ;
      if (num1 == num2 && num1 == num3) 
        cout << "all numbers are the same" << endl ;
      else if (num1 != num2 && num2 != num3)
        cout << "all numbers are distinct" << endl ;
     
     return 0;
}