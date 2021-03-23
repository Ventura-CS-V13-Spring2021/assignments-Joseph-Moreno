#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int rdnum;
  int n ;
  int sum = 0;
  ifstream  rdfile;

  rdfile.open("rdnum.txt");

  while (! rdfile.fail())
  {

      rdfile >> rdnum;
      sum += rdnum ;
     cout << rdnum << endl ;
  }
  cout << "Sum " << sum << endl; 

  rdfile.close ();
}