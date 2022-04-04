#include <iostream>
#include <math.h>
using namespace std;

int main() {

   int n;
   int input;
   int prevNum;
   int maxDiff = 0;
   
   cin >> n;
   cin >> input;
   prevNum = input;
   
   for (int i = 0; i < (n-1); i++){
      cin >> input;
      if (abs(input - prevNum) > maxDiff){
         maxDiff = abs(input - prevNum);
      }
      prevNum = input;
   }
   
   cout << maxDiff << endl;

   return 0;
}