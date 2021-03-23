#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()
{
int rdm1;
int rdm2;
int rdm3;
int rdm4;
int rdm5;

rdm1 = rand()%100 ;
rdm2 = rand()%100 ;
rdm3 = rand()%100 ;
rdm4 = rand()%100 ;
rdm5 = rand()%100 ;

cout << rdm1 << " " << rdm2 << " " << rdm3 <<" " << rdm4<<" " <<rdm5 ; 
int i = 1 ;
while(i < 5, i++) 
  if(rdm2 > rdm1)
    cout << rdm2; 
    
      if (rdm3 > rdm2)
      cout << rdm3 ;
      
        if (rdm4 > rdm3)
          cout << rdm4 ;
          
            if (rdm5>rdm4)
              cout << rdm5 ; 
              


}



