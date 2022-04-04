#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<bool> chptList(16); // Valid chapters are 1-15. 1 means include, 0 exclude. Element 0 unused. 
   bool includeChpt;
   int i;
   
   // Get the chapter selections
   for (i = 1; i <= 15; ++i) {
      cin >> includeChpt; 
      if (includeChpt) {
         chptList.at(i) = true;
      }
      else {
         chptList.at(i) = false;
      }
   }
   
   bool chapSelected = false;
   int count = 0;
   int start = -1;
   int end = -1;
   
   for (i = 1; i <= 15; ++i) {
      if (chptList.at(i)) {
         chapSelected = true;
         count++;
         
         if (start == -1){
            start = i;
         }
         else {
            end = i;
         }
      }
      else{
         if (count == 1){
            cout << start << " ";
         }
         else if (count == 2){
            cout << start << " " << end << " ";
         }
         else if (count > 2){
            cout << start << "-" << end << " ";
         }
         
         count = 0;
         start = -1;
         end = -1;
      }
   }
   
   if (chapSelected){
      if (count == 1){
         cout << start << " ";
      }
      else if (count == 2){
         cout << start << " " << end << " ";
      }
      else if (count > 2){
         cout << start << "-" << end << " ";
      }
   }
   else {
      cout << "None ";
   }
   
   cout << endl;

   return 0;
}