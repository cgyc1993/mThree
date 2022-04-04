#include <iostream>
#include <string>
using namespace std;

int main() {
   string lineString;
   
   string curWord = "";
   bool hasComma = false;
   string first;
   string second;
   
   bool isContinue = true;
   
   while (isContinue){
      cout << "Enter input string:" << endl;
      getline(cin, lineString);  
      
      first = "";
      second = "";
      curWord = "";
      hasComma = false;
      
      if (lineString == "q"){
         isContinue = false;
      }
      else{
         for (int i = 0; i < lineString.size(); i++){
            if (lineString.at(i) != ' '){
               if (lineString.at(i) == ','){
                  hasComma = true;
                  if (first == ""){
                     first = curWord;
                     curWord = "";
                  }
               }
               else{
                  curWord += lineString.at(i);
               }
            }
            else{
               if (first == ""){
                  first = curWord;
                  curWord = "";
               }
            }
         }
         
         second = curWord;
         
         if (hasComma){
            cout << "First word: " << first << endl;
            cout << "Second word: " << second << endl;
         }
         else{
            cout << "Error: No comma in string." << endl;
         }
         
         cout << endl;
      }
   }
    
   return 0;
}