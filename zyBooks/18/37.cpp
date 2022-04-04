#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   int numItems;
   vector<string> listItems;
   string currItem;
   int i;
   
   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }
  
   int curLen = 0;
   int maxLen = -1;
   
   for (i = 0; i < numItems; ++i) {
      if (listItems.at(i) == "I"){
         if (curLen > maxLen){
            maxLen = curLen;
            
         }
         
         curLen = 0;
      }
      else{
         curLen++;
      }
   }
   
   if (curLen > maxLen){
      maxLen = curLen;
      
   }
   
   cout << maxLen << endl;

   return 0;
}