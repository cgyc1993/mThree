#include <iostream>
using namespace std;

int main() {

   int num1;
   int num2;
   
   cin >> num1;
   cin >> num2;
   
   if (num1 > num2){
      cout << "Second integer can't be less than the first." << endl;
   }
   else{
      while (num1 <= num2){
         cout << num1 << " ";
         num1 += 5;  
      }
      
      cout << endl;
   }

   return 0;
}
