#include <iostream>
using namespace std;

int main() {
   int n;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   for (int i = n; i > 0; i--){
      if (i%2 == 0) {
         cout << i << " ";
      }
   }
   
   cout << 0 << " " << endl;

   return 0;
}