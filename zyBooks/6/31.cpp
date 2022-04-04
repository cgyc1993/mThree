#include <iostream>
using namespace std;

bool IsLeapYear(int userYear){
   if (userYear % 100 == 0){
      if (userYear % 400 == 0){
         return true;
      }
      else {
         return false;
      }
   }
   else if (userYear % 4 == 0) {
      return true;
   }
   else {
      return false;
   }
}

int main() {
   int userYear;
   
   cin >> userYear;
   
   if (IsLeapYear(userYear)){
      cout << userYear << " is a leap year." << endl;
   }
   else {
      cout << userYear << " is not a leap year." << endl;
   }

   return 0;
}
