#include <iostream>
using namespace std ;

int main()
{
  const double rateA = 15.00 ; 
  const double rateB = 12.00 ;
  const double rateC = 9.00 ;

  int 	salesa;
  int   salesb;
  int   salesc;

  double  a_total ;
  double  b_total ;
  double  c_total ; 
  double  total_cost ;


  cout << "How many A tickets were sold?";
  cin >> salesa ; 

  cout << "How many B tickets were sold?" ;
  cin >> salesb ;

  cout << "How many C tickets were sold?" ;
  cin >> salesc ;

  a_total = salesa * rateA ;
  b_total = salesb * rateB ;
  c_total = salesc * rateC ;

  total_cost = a_total + b_total + c_total ;
  cout << "The total income of the tickets was $ " << total_cost << endl ;


}