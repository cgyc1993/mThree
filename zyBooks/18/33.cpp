#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> input(21);
   int total = 0;
   int frame = 0;
   int prev = -1;
   
   for (int i = 0; i < 21; i++){
      cin >> input.at(i);
   }
   
   for (int i = 0; i < 21; i++){
      
      if (frame > 9){
         break;
      }
      
      if (input.at(i) == 10){
         total = total + input.at(i) + input.at(i + 1) + input.at(i + 2);
      }
      else if (input.at(i) + prev == 10){
         total = total + input.at(i) + input.at(i + 1);
      }
      else if (prev == -1){
         prev = input.at(i);
         total += input.at(i);
         continue;
      }
      else{
         total += input.at(i);
      }
         
      prev = -1;
      frame++;
      cout << total << " ";
   }
   
   cout << endl;

   return 0;
}