#include <iostream>
using namespace std;

int main() {

   int num = 0;
   int max = -1;
   
   while (num >= 0){
      cin >> num;
      
      if (num >= max){
         max = num;
      }
   }
   
   cout << max << endl;

   return 0;
}