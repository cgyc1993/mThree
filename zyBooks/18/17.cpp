#include <iostream>
using namespace std;

int main() {

   int num;
   int input;
   int total;
   
   cin >> num;
   
   while (num > 0){
      total = 0;
      
      for (int i = 0; i < num; i++){
         cin >> input;
         total += input;
      }
      
      cout << total << endl;
      
      cin >> num;
   }

   return 0;
}