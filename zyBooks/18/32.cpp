#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
   
   vector<int> binaryNum(8);
   int input;
   int total = 0; 
   
   // Get user's binary number. Store leftmost bit in element 7, rightmost in 0. 
   // Hint: for (...) {
   for (int i = 7; i >= 0; i--){
      cin >> binaryNum.at(i);
   }
   
   for (int i = 0; i < 8; i++){
      total += binaryNum.at(i) * pow(2, i);
   }
   
   cout << total << endl;
   
   return 0;
}