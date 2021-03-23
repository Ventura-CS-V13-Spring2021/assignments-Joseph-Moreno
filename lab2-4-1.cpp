#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

int rdnum ;
int n;
ofstream  rdfile ;

rdfile.open("rdnum.txt");
 
cout << "enter the number of rdnum \n" ;
 
cin >> n;
rdfile << n << endl ;
srand(time(0));
for(int i; i <n ; i++)
{
 
   rdnum =random () %100 ;
   rdfile << rdnum << endl ;
}
rdfile.close();

}