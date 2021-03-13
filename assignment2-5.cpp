#include <iostream>
using namespace std;
int main()
{

int num,i ;
int range1 , range2 ;

cout << "List 2 integers to find the prime numbers in the range: " ;
cin >> range1 >> range2;

for(int num=range1 ; num <= range2 ; num ++)
{
    for (i=2 ; i < num ; i++ )
    {
      if(num % i == 0)
        break;
      
    }
    if (i== num)
      cout<< num  << "\n"  ;
}

}