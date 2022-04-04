#include <iostream>
using namespace std;

int main() {

   int num;
   int input;
   
   cin >> num;
   
   for (int i = 0; i < num; i++){
      cin >> input;
      
      cout << input;
      
      if (i != (num - 1)){
         cout << ", ";
      }
      else{
         cout << "." << endl;;
      }
   }

   return 0;
}