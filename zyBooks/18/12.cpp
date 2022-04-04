#include <iostream>
using namespace std;

int main() {

   string plate;
   bool carry = false;
   const char maxInt = '9';
   const char maxLetter = 'Z';
   
   
   cin >> plate;
   
   for (int i = plate.size() - 1; i >= 0; i--){
      if (isdigit(plate.at(i))) {
         if (plate.at(i) == maxInt) {
            plate.at(i) = '0';
            carry = true;
         }
         else {
            plate.at(i) = (char)(plate.at(i) + 1);
         }
      }
      else {
         if (plate.at(i) == maxLetter) {
            plate.at(i) = 'A';
            carry = true;
         }
         else {
            plate.at(i) = (char)(plate.at(i) + 1);
         }
      }
      
      if (carry) {
         carry = false;
      }
      else {
         carry = false;
         break;
      }
   }
   
   cout << plate << endl;

   return 0;
}