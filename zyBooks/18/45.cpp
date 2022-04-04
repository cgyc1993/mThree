#include <iostream>
#include <string>
using namespace std;

string DigitToWord(int digitIn) {

   switch (digitIn){
      case 0:
         return "zero";
      
      case 1:
         return "one";
      
      case 2:
         return "two";
      
      case 3:
         return "three";
      
      case 4:
         return "four";
         
      case 5:
         return "five";
      
      case 6:
         return "six";
      
      case 7:
         return "seven";
      
      case 8:
         return "eight";
      
      case 9:
         return "nine";
   }

}

string TensDigitToWord(int digitIn) {
 
   switch (digitIn){
      case 2:
         return "twenty";
      
      case 3:
         return "thirty";
      
      case 4:
         return "forty";
         
      case 5:
         return "fifty";
      
      case 6:
         return "sixty";
      
      case 7:
         return "seventy";
      
      case 8:
         return "eighty";
      
      case 9:
         return "ninety";
   }
}

string TwoDigitNumToWords(int numIn) {

   if (numIn < 20 || numIn > 99){
      return "error";
   }
   else {
      return TensDigitToWord(numIn/10) + " " + DigitToWord(numIn%10);
   }

}


int main() {

   int n;
   
   cin >> n;
   
   cout << TwoDigitNumToWords(n) << endl;
   
   return 0;

}