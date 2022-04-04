#include <iostream>
using namespace std;

int Fibonacci(int n) {
   int prev = 0;
   int cur = 1;
   int temp;
   
   if (n < 0){
      return -1;
   }
   else if (n == 0){
      return 0;
   }
   else if (n == 1){
      return 1;
   }
   else {
      for (int i = 2; i <= n; i++){
         temp = prev;
         prev = cur;
         cur = temp + cur;
      }
   }
   
   return cur;
}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}