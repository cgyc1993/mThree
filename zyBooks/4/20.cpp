#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string pw;
   string pwMod = "";
   char currentChar;
   
   cin >> pw;
   
   for (int i = 0; i < pw.size(); i++){
      currentChar = pw.at(i);
      if (currentChar == 'i'){
         pwMod += "1";
      }
      else if (currentChar == 'a'){
         pwMod += "@";
      }
      else if (currentChar == 'm'){
         pwMod += "M";
      }
      else if (currentChar == 'B'){
         pwMod += "8";
      }
      else if (currentChar == 's'){
         pwMod += "$";
      }
      else {
         pwMod += currentChar;
      }
   }

   pwMod += "!";
   
   cout << pwMod << endl;
   
   return 0;
}