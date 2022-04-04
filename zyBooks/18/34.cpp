#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> userValues(10);
   int i;
   int max;
   int min;
   int total = 0;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }
   
   max = userValues.at(0);
   min = userValues.at(0);
   
   for (i = 0; i < 10; ++i) {
      if (max < userValues.at(i)){
         max = userValues.at(i);
      }
      
      if (min > userValues.at(i)){
         min = userValues.at(i);
      }
      
      total += userValues.at(i);
   }
   
   cout << min << " " << max << " " << static_cast<double>(total) / 10.0 << endl;
   
   return 0;
}