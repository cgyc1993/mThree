#include <iostream>
using namespace std;

int main() {

   int n;
   int count = 0;
   
   cin >> n;
   
   while (n != 1){
      count++;
      cout << n << "\t";;
      
      if (count%10 == 0){
         cout << endl;
      }
      
      if (n % 2 == 0){
         n /= 2;
      }
      else {
         n = 3 * n + 1;
      }
      
   }
   cout << n << endl;

   return 0;
}