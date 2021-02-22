#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     int current_min ;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;

      current_min = number1;

      if (current_min > number2)
        current_min = number2 ;
     if (current_min > number3)
        current_min = number3 ;
      cout << "min is " << current_min << endl;
     return 0;
}