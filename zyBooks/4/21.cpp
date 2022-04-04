#include <iostream>
using namespace std;

int main() {
   
   string result;
   string input;
   
   getline(cin, input);
   
   for (int i = 0; i < input.size(); i++){
      if (isalpha(input.at(i))){
         result += input.at(i);
      }
   }

   cout << result << endl;

   return 0;
}