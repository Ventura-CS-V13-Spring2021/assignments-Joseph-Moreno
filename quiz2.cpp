#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){

  int num,i ;
int range1 , range2 ;

cout << "List 2 integers to find the prime numbers in the range: " ;
cin >> range1 >> range2;

if (range1 > range2){
  cout << "cannot do since range 1 is bigger than range 2" << endl ;
}
else if(range1 < range2)
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


