#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {

   vector<string> input;
   vector<int> count;
   int size;
   
   
   cin >> size;
   
   input.resize(size);
   count.resize(size);
   
   for (int i = 0; i < size; i++){
      count.at(i) = 1;
      cin >> input.at(i);
   }
   
   for (int i = 0; i < size - 1; i++){
      for (int j = i + 1; j < size; j++){
         if (input.at(i) == input.at(j)) {
            count.at(i)++;
            count.at(j)++;
         }
      }
   }
   
   for (int i = 0; i < size; i++){
      cout << input.at(i) << " - " << count.at(i) << endl;
   }

   return 0;
}
