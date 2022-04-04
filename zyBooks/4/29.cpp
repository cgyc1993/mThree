#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   cout << "Enter arrow base height:" << endl;
   cin >> arrowBaseHeight;
   
   cout << "Enter arrow base width:" << endl;
   cin >> arrowBaseWidth;
   
   do {
      cout << "Enter arrow head width:" << endl;
      cin >> arrowHeadWidth;
   } while (arrowHeadWidth <= arrowBaseWidth);
   cout << endl;
   
   // Draw arrow base (height = 3, width = 2)
   for (int i = 1; i <= arrowBaseHeight; i++){
      for (int j = 1; j <= arrowBaseWidth; j++){
         cout << "*";
      }
      cout << endl;
   }
    
   // Draw arrow head (width = 4)
   for (int x = 0; x < arrowHeadWidth; x++){
      for (int y = arrowHeadWidth - x; y >= 1; y--){
         cout << "*";
      }
      cout << endl;
   }
   
   return 0;
}