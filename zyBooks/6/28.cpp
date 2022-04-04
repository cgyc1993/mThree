#include <iostream>
using namespace std;

string IntToReverseBinary(int inputInt){
   string output = "";
   
   while (inputInt > 0){
      if (inputInt % 2 == 0) {
         output += "0";
      }
      else {
         output += "1";
      }
      
      inputInt /= 2;
   }
   
   return output;  
}
   

string StringReverse(string inputStr){
   string output = "";
   for (int i = inputStr.size() - 1; i >= 0 ; i--){
      output += inputStr.at(i);
   }
   
   return output;  
}

int main() {
   
   int userInt;
   
   cin >> userInt;
   
   cout << StringReverse(IntToReverseBinary(userInt)) << endl;

   return 0;
}
