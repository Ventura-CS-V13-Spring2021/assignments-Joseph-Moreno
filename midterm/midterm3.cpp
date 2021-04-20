#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;


int main()
{
  int rdm1;
  int rdm2;
  int rdm3;

  rdm1 = rand () %10 ;
  rdm2 = rand () %10 ;
  rdm3 = rand () %10 ;

  int min ;
  int max;
  if (rdm1 > rdm2 && rdm1 > rdm3 )
    rdm1 = max;
    else (rdm2 > rdm1 && rdm2 > rdm3);
     rdm2 = max;
    else (rdm3 = max);

  if (rdm1 < rdm2 && rdm1 < rdm3 )
    rdm1 = min;
    else (rdm2 < rdm1 && rdm2 > rdm3);
     rdm2 = min;
    else (rdm3 = min);



}