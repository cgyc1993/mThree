#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText; 
   string cleanedText; 
   bool cont = true;
   
   getline(cin, userText); 

   while (userText.size() > 0 && cont){
      if (isspace(userText.at(0))){
         userText.erase(0,1);
      }
      else {
         cont = false;
      }
   }
   
   cont = true;
   while (userText.size() > 0 && cont){
      if (isspace(userText.at(userText.size() - 1))){
         userText.pop_back();
      }
      else {
         cont = false;
      }
   }
   
   cleanedText = userText;
   
   if (userText.size() > 0){
      cout << cleanedText << endl;
   }

   return 0;
}