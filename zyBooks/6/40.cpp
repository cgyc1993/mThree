#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {
   
   return usrStr.size();
   
}

string OutputWithoutWhitespace(string usrStr){
   string output = "";
   
   for (int i = 0; i < usrStr.size(); i++){
      if (usrStr.at(i) != ' ' && usrStr.at(i) != '\t'){
         output += usrStr.at(i);
      }
   }
   
   return output;
}

int main() {

   string usrStr;
   
   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, usrStr);
   
   cout << endl << "You entered: " << usrStr << endl << endl;

   cout << "Number of characters: " << GetNumOfCharacters(usrStr) << endl;
   
   cout << "String with no whitespace: " << OutputWithoutWhitespace(usrStr) << endl;
   
   return 0;
}