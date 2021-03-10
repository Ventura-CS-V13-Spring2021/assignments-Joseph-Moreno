#include <iostream>
using namespace std;
int main()
{

	char letter ;
	letter = 65; 

	while(letter < 91)
	{
		cout << letter << " " ;
		letter ++ ;
		if (letter % 5 == 0){
			cout << "\n" ;
		}
	}
//   while(letter < 91)
//   {
  
//   cout << letter << " " ;
//   letter ++ ;
//     if (letter == 70){

//      cout << "\n" ;}
     
//       else if (letter == 75){
//       cout << "\n" ;
//       }
//       else if (letter == 80){
//       cout << "\n" ;
//       }
//       else if (letter == 85){
//       cout << "\n" ;
//       }
//       else if (letter == 90){
//       cout << "\n" ;
//       }
     
//   }

  return 0 ; 
}