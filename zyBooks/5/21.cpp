#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

   vector<double> input;
   int size;
   double max;
   
   cin >> size;
   input.resize(size);
   
   for (int i=0; i < size; i++){
      cin >> input.at(i);
      if (i == 0 || input.at(i) > max) {
         max = input.at(i);
      } 
   }
   
   cout << fixed << setprecision(2);
   
   for (int i=0; i < size; i++){
      cout << input.at(i) / max << " ";
   }
   
   cout << endl;

   return 0;
}
