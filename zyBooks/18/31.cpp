#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> listInts(6); 
   // Hint: Declare listNegInts
   unsigned int i;
   vector<int> listNegInts;
   
   // Get input integers
   for (i = 0; i < 6; ++i) {
      cin >> listInts.at(i);
   }

   for (i = 0; i < 6; ++i) {
      if (listInts.at(i) < 0){
         listNegInts.push_back(listInts.at(i));
      }
   }
   
   cout << listNegInts.size() << endl;
   for (i = 0; i < listNegInts.size(); ++i) {
      cout << listNegInts.at(i) << endl;
   }

   return 0;
}