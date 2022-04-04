#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
// FIXME include vector library
using namespace std;

int main() {

   const int size = 5;
   vector<double> input(size);
   double max = -1.0;
   double total = 0;
   
   
   for (int i = 0; i < size; i++){
      cout << "Enter weight " << i + 1 << ":" << endl;
      cin >> input.at(i);
      
      total += input.at(i);
      
      if (input.at(i) > max){
         max = input.at(i);
      }
   }
   
   cout << fixed << setprecision(2);
   cout << "You entered: ";
   
   for (int i = 0; i < size; i++){
      cout << input.at(i) << " ";
   }
   
   cout << endl << endl;
   
   cout << "Total weight: " << total << endl;
   cout << "Average weight: " << total / 5.0 << endl;
   cout << "Max weight: " << max << endl;
      
   return 0;
}