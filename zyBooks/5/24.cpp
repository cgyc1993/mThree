#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> input;
   int size;
   int low;
   int up;
   
   cin >> size;
   
   input.resize(size);
   
   for (int i = 0; i < size; i++) {
      cin >> input.at(i);
   }
   
   cin >> low;
   cin >> up;
   
   for (int i = 0; i < size; i++) {
      if (input.at(i) >= low && input.at(i) <= up){
         cout << input.at(i) << ",";
      }
   }
   
   cout << endl;

   return 0;
}
