#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

   int front = 0;
   int back;
   string input;
   bool palindrome = true;
   
   getline(cin, input);
   
   back = input.size() - 1;
   
   while (front < back){
      if (isspace(input.at(front))){
         front++;
         continue;
      }
      
      if (isspace(input.at(back))){
         back--;
         continue;
      }
      
      if (input.at(front) != input.at(back)){
         palindrome = false;
         break;
      }
      front++;
      back--;
   }
   
   if (palindrome){
      cout << "palindrome: " << input << endl;
   }
   else {
      cout << "not a palindrome: " << input << endl;
   }

   return 0;
}
