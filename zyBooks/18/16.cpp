#include <iostream>
using namespace std;

int main() {

   int input;
   int total = 0;
   int valid = 0;
   int invalid = 0;
   
   double average = 0;
   
   cin >> input;
   
   while (input != 0){
      if (input >= 2 && input <= 12){
         valid++;
         total += input;
      }
      else {
         invalid++;
      }  
      
      cin >> input;
   }
   
   if (valid > 0) {
      average = static_cast<double>(total) / valid;
   }
   
   cout << "Average: " << average << endl;
   cout << "Valid: " << valid << endl;
   cout << "Invalid: " << invalid << endl;   

   return 0;
}