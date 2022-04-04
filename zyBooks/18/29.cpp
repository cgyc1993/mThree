#include <iostream>
#include <vector>
using namespace std;

int main() {
   int numItems;
   vector<int> listItems;
   int currItem;
   int i;
   int max;
   
   // Get items
   cin >> numItems;
   for (i = 0; i < numItems; ++i) {
      cin >> currItem;
      listItems.push_back(currItem);
   }
   
   max = listItems.at(0);
   
   for (i = 1; i < numItems; ++i) {
      if (listItems.at(i) > max){
         max = listItems.at(i);
      }
   }
   
   cout << max << endl;
   return 0;
}

