#include <iostream>
using namespace std;

int main() {

   int input;
   
   cin >> input;
   
   if (input >= 11 && input <= 100){
      cout << input << " ";
      
      while (input % 11 != 0){
         input--;
         cout << input << " ";
      }
      
      cout << endl;
   }
   else {
      cout << "Input must be 11-100" << endl;
   }

   return 0;
}
