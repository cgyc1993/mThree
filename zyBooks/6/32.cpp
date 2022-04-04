#include <iostream>
#include <vector> 
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals){
   int money = userTotal;
   
   if (money > 0){
      coinVals.at(0) = money / 100;
      
      money %= 100;
      
      coinVals.at(1) = money / 25;
      
      money %= 25;
      
      coinVals.at(2) = money / 10;

      money %= 10;
      
      coinVals.at(3) = money / 5;

      money %= 5;
      
      coinVals.at(4) = money;
   }
   else {
      coinVals.at(0) = -1;
   }
}

int main() {
   int inputVal;
   vector<int> changeAmount(5); 
   
   cin >> inputVal;
   
   ExactChange(inputVal, changeAmount);
   
   if (changeAmount.at(0) < 0){
      cout << "no change" << endl;
   }
   else {
      if (changeAmount.at(0) == 1){
         cout << changeAmount.at(0) << " dollar" << endl;
      }
      else if (changeAmount.at(0) > 1){
         cout << changeAmount.at(0) << " dollars" << endl;
      }
      
      if (changeAmount.at(1) == 1){
         cout << changeAmount.at(1) << " quarter" << endl;
      }
      else if (changeAmount.at(1) > 1){
         cout << changeAmount.at(1) << " quarters" << endl;
      }
   
      if (changeAmount.at(2) == 1){
         cout << changeAmount.at(2) << " dime" << endl;
      }
      else if (changeAmount.at(2) > 1){
         cout << changeAmount.at(2) << " dimes" << endl;
      }
      
      if (changeAmount.at(3) == 1){
         cout << changeAmount.at(3) << " nickel" << endl;
      }
      else if (changeAmount.at(3) > 1){
         cout << changeAmount.at(3) << " nickels" << endl;
      }
      
      if (changeAmount.at(4) == 1){
         cout << changeAmount.at(4) << " penny" << endl;
      }
      else if (changeAmount.at(4) > 1){
         cout << changeAmount.at(4) << " pennies" << endl;
      }
      
   }

   return 0;
}
