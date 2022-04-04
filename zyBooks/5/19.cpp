#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers
   int i = 0;
   int input;
   
   cin >> input;
   
   while (input > 0){
      userInts.resize(userInts.size() + 1);
      userInts.at(i) = input;
      i++;
      cin >> input;
   } 
   
   if ( i > 9){
      cout << "Too many numbers" << endl;
   }
   else {
      cout << "Middle item: " << userInts.at(userInts.size() / 2) << endl;
   }

   return 0;
}
