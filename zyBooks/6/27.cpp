#include <iostream>
using namespace std;

string RemoveNonAlpha(string userString){
   string output = "";
   
   for (int i = 0; i < userString.size(); i++){
      if (isalpha(userString.at(i))){
         output += userString.at(i);
      }
   }
   
   return output;
}

int main() {
   string userString;
   
   getline(cin, userString);
   
   cout << RemoveNonAlpha(userString) << endl;
   
   
   return 0;
}
