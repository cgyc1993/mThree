#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

   string text;
   int count = 0;
   bool word = false;
   
   getline(cin, text);
   
   for (unsigned int i = 0; i < text.size(); i++){      
      if (isspace(text.at(i))){
         if (word){
            word = false;
            count++;
         }
      }
      else {
         word = true;
      }
   }
   
   if (text.size() > 0){
      if (text.at(text.size() - 1) != ' '){
         count++;
      }
   }
   
   cout << count << endl;
   return 0;
}