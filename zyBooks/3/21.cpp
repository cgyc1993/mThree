#include <iostream>
using namespace std;

int main() {

   int r;
   int g;
   int b;
   
   cin >> r;
   cin >> g;
   cin >> b;
   
   if (r < g && r < b){
      cout << 0 << " " << g - r << " " << b - r << endl;
   }
   else if (g < r && g < b){
      cout << r - g << " " << 0 << " " << b - g << endl;
   }
   else {
      cout << r - b << " " << g - b << " " << 0 << endl;
   }

   return 0;
}
