#include <iostream>
using namespace std;

int main() {
   int num[4][3];
   int input;
   
   for (int i = 0; i < 4; i++){
      for (int j = 0; j < 3; j++){
         cin >> input;
         num[i][j] = input;
      }
   }
   
   for (int i = 3; i >= 0; i--){
      for (int j = 2; j >= 0; j--){
         cout << num[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}
