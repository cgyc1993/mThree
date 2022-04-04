#include <iostream>
#include <math.h> 
using namespace std;

int MaxMagnitude(int userVal1, int userVal2){
   if (fabs(userVal1) > fabs(userVal2)){
      return userVal1;
   }
   else {
      return userVal2;
   }
}

int main() {
   int userVal1;
   int userVal2;

   cin >> userVal1;
   cin >> userVal2;
   
   cout << MaxMagnitude(userVal1, userVal2) << endl;

   return 0;
}
