#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userValues(10);
   vector<int> count(10);
   int i;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }

   for (i = 0; i < 10; ++i) {
      for (int j = i; j < 10; ++j) {     
         if (userValues.at(i) < 0 || userValues.at(i) > 99){
            cout << "Invalid input: "<< userValues.at(i) << " is not in 0-99" << endl;
            return 0;
         }
         
         if (userValues.at(i) == userValues.at(j)){
            if (i == j){
               count.at(i)++;
            }
            else {
               count.at(i)++;
               count.at(j)++;
            }
         }
      }
   }
   
   int max = 0;
   
   for (i = 1; i < 10; ++i) {
      if (count.at(i) > count.at(max)){
         max = i;
      }
   }
   
   cout << userValues.at(max) << " " << count.at(max) << endl;

   return 0;
}