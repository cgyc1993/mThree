#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> input;
   int size;
   int temp = 0;
   
   cin >> size;
   
   input.resize(size);
   
   for (int i = 0; i < size; i++){
      cin >> input.at(i);
   }
   
   for (int i = 0; i < size - 1; i++){
      for (int j = i + 1; j < size; j++){
         if (input.at(j) < input.at(i)){
            temp = input.at(i);
            input.at(i) = input.at(j);
            input.at(j) = temp;
         }
      }
   }
   
   cout << input.at(0) << " and " << input.at(1) << endl;

   return 0;
}
