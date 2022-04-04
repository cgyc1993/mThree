#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails() {
   int value = rand() % 2;
   if (value == 1) {
      return "tails";
   }
   else {
      return "heads";
   }
}

int main() {
   int input;
   
   cin >> input;
   
   srand(2);  // Unique seed

   for (int i = 0; i < input; i++){
      cout << HeadsOrTails() << endl;
   }
   
   return 0;
}
