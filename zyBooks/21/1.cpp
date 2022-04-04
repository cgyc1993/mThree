#include <iostream>
using namespace std;

int main() {

   int low;
   int high;
   int x;
   int num = 0;
   
   cin >> low;
   cin >> high;
   cin >> x;
   
   for (int i = low; i <= high; i++){
      if (i % x == 0){
         num++;
      }
   }
   
   cout << num << endl;

   return 0;
}