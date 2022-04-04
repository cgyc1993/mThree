#include <iostream>
using namespace std;

int MaxFive(int n1, int n2, int n3, int n4, int n5){
   int maxFound = n1;
   
   if (n2 > maxFound){
      maxFound = n2;
   }
   
   if (n3 > maxFound){
      maxFound = n3;
   }
   
   if (n4 > maxFound){
      maxFound = n4;
   }
   
   if (n5 > maxFound){
      maxFound = n5;
   }
   
   return maxFound;
}

int main() {
   // Don't modify main's code below
   int v, w, x, y, z;
   int maxVal;
   
   cin >> v; cin >> w; cin >> x; cin >> y; cin >> z;
   maxVal = MaxFive(v, w, x, y, z);
   cout << maxVal << endl;

   return 0;
}