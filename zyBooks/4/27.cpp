#include <iostream>
using namespace std;

int main() {

   int a, b, c, d, e, f, x, y;
   bool solutionFound = false;
   
   cin >> a;
   cin >> b;
   cin >> c;
   cin >> d;
   cin >> e;
   cin >> f;
   
   for (int i = -10; i <= 10; i++){
      for (int j = -10; j <= 10; j++){
         if ( ((a * i + b * j) == c) && ((d * i + e * j) == f) ){
            solutionFound = true;
            x = i;
            y = j;
            break;
         }
      }
      
      if (solutionFound){
         break;
      }
   }
   
   if (solutionFound){
      cout << "x = " << x << ", y = " << y << endl;
   }
   else {
      cout << "There is no solution" << endl;
   }
   

   return 0;
}
