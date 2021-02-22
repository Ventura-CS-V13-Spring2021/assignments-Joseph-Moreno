#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     int current_max ;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;

      current_max = number1;

      if (current_max < number2)
        current_max = number2 ;
     if (current_max < number3)
        current_max = number3 ;
      cout << "max is " << current_max << endl;
     return 0;
}