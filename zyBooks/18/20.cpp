#include <iostream>
#include <cctype>
using namespace std;

int main() {

   bool tooShort = false;
   bool missLetter = true;
   bool missNum = true;
   bool missSpecial = true;
   string input;
   
   cin >> input;
   
   if (input.size() < 8){
      tooShort = true;
   }
   
   for (unsigned int i = 0; i < input.size(); i++){
      if (isalpha(input.at(i))){
         missLetter = false;
      }
      else if (isdigit(input.at(i))){
         missNum = false;
      }
      else if (input.at(i) == '!' || input.at(i) == '#' || input.at(i) == '%'){
         missSpecial = false;
      }
   }
   
   if (tooShort){
      cout << "Too short" << endl;
   }
   
   if (missLetter){
      cout << "Missing letter" << endl;
   }
   
   if (missNum){
      cout << "Missing number" << endl;
   }
   
   if (missSpecial){
      cout << "Missing special" << endl;
   }
   
   if (!tooShort && !missLetter && !missNum && !missSpecial) {
      cout << "OK" << endl;
   }

   return 0;
}