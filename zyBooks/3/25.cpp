#include <iostream>
using namespace std;

int main() {

   int money;
   
   cin >> money;
   
   if (money > 0){
      if (money / 100 == 1){
         cout << money / 100 << " Dollar" << endl;
      }
      else if (money / 100 > 1){
         cout << money / 100 << " Dollars" << endl;
      }
      
      money %= 100;
      
      if (money / 25 == 1){
         cout << money / 25 << " Quarter" << endl;
      }
      else if (money / 25 > 1){
         cout << money / 25 << " Quarters" << endl;
      }
      
      money %= 25;
   
      if (money / 10 == 1){
         cout << money / 10 << " Dime" << endl;
      }
      else if (money / 10 > 1){
         cout << money / 10 << " Dimes" << endl;
      }
      
      money %= 10;
      
      if (money / 5 == 1){
         cout << money / 5 << " Nickel" << endl;
      }
      else if (money / 5 > 1){
         cout << money / 5 << " Nickels" << endl;
      }
      
      money %= 5;
      
      if (money == 1){
         cout << money << " Penny" << endl;
      }
      else if (money > 1){
         cout << money << " Pennies" << endl;
      }
   }
   else {
      cout << "No change" << endl;
   }

   return 0;
}