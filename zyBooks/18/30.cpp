#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector<int> yearlyValues(12);
   int i;
   
   // Get vector values
   for (i = 0; i < 12; ++i) {
      cin >> yearlyValues.at(i);
   }
  
   for (i = 0; i < 12; i += 4) {
      cout << yearlyValues.at(i) << " ";
      cout << yearlyValues.at(i + 1) << " ";
      cout << yearlyValues.at(i + 2) << " ";
      cout << yearlyValues.at(i + 3) << endl;
   }

   return 0;
}