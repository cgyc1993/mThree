#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> userInt;
   int size;
   
   cin >> size;
   userInt.resize(size + 1);
   
   for (int i = 0; i < size + 1; i++){
      cin >> userInt.at(i);
   }
   
   for (int i = 0; i < size; i++){
      if (userInt.at(i) <= userInt.at(size)){
         cout << userInt.at(i) << ",";
      }
   }
   
   cout << endl;

   return 0;
}
