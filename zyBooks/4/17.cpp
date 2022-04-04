#include <iostream>
using namespace std;

int main() {

   int max = 0;
   int total = 0;
   int count = 0;
   int input;
   
   cin >> input;
   
   while (input >= 0){
      if (input > max){
         max = input;
      }
      total += input;
      count++;
      
      cin >> input;
   }
   
   cout << max << " " << total / count << endl;
   return 0;
}
