#include <iostream>
using namespace std;
int main()
{
     char  selection;
     cout << "Enter your choice among A, B, C\n";
     cin >> selection;
     
     switch(selection)
     {
       case 'A' : cout << "Your choice is A .\n ";
        break ;
       case 'B' : cout << "Your choice is B .\n ";
        break ; 
        case 'C': cout << "Your choice is C .\n ";
         break ; 
      case 'a' : cout << "Your choice is A .\n ";
        break ;
       case 'b' : cout << "Your choice is B .\n ";
        break ; 
        case 'c': cout << "Your choice is C .\n ";
         break ; 
        default:cout << "You didnt choose A, B, or C. \n" ;
      }
     
     return 0;
}
