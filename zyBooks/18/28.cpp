#include <iostream>
using namespace std;

int main() {

   int n;
   int input;
   int prev;
   bool sorted = true;
   
   cin >> n;
   cin >> input;
   prev = input;
   
   for (int i = 1; i < n; i++){
      cin >> input;
      if ( input <= prev){
         sorted = false;
         break;
      }
      
      prev = input;
   }
   
   if (sorted) {
      cout << "Sorted" << endl;
   }
   else {
      cout << "Unsorted" << endl;
   }

   return 0;
}