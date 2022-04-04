#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int count = 0;
   char currentChar;
   
   getline(cin, userText);  // Gets entire line, including spaces. 

   for (int i = 0; i < userText.size(); i++){
      currentChar = userText.at(i);
      if ((currentChar != ' ') && (currentChar != '.') && (currentChar != '!') && (currentChar != ',')){
         count++;
      }
   }
   
   cout << count << endl;

   return 0;
}
