#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase){
   string output = "";
   
   for (int i = 0; i < userPhrase.size(); i++){
      if (isupper(userPhrase.at(i))){
         output += userPhrase.at(i);
      }
   }
   
   return output;
}

int main() {
   string userPhrase;
   
   getline(cin, userPhrase);
   
   cout << CreateAcronym(userPhrase) << endl;

   return 0;
}