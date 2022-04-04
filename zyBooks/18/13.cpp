#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   for (int i = - fabs(n); i <= fabs(n); i++){
      cout << i << " ";
   }
   
   cout << endl;

   return 0;
}
