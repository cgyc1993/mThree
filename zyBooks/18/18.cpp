#include <iostream>
using namespace std;

int main() {

   int input;

   cin >> input;
   
   while (input > 0){
      cout << input % 10 << endl;
      
      input /= 10;
   }

   return 0;
}