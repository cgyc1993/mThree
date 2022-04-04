#include <iostream>
#include <string>
using namespace std;

int main() {

   char input;
   string strInput;
   int count = 0;
   
   cin >> input;
   getline(cin, strInput);
   
   for (int i = 0; i < strInput.size(); i++){
      if (strInput.at(i) == input){
         count++;
      }
   }
   
   if (count == 1){
      cout << count << " " << input << endl;
   }
   else{
      cout << count << " " << input << "\'s" << endl;
   }

   return 0;
}