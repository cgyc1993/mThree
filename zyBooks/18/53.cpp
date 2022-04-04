#include <iostream>
#include <string>
using namespace std;

int FindNextSubstr(string inputString, int startIndex, string searchStr){
   for (unsigned int i = startIndex; i < (inputString.size() - searchStr.size() + 1); i++){
      if (inputString.substr(i, searchStr.size()) == searchStr){
         return i;
      }
   }
   
   return -1;
}

   
int main() {
   string inputString;
   int startIndex;
   string searchStr;
   
   cin >> inputString;
   cin >> startIndex;
   cin >> searchStr;
   
   cout << FindNextSubstr(inputString, startIndex, searchStr) << endl;

   return 0;
}