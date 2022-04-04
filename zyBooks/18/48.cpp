#include <iostream>
#include <cstdlib>
using namespace std;

bool FirstRectangleSmaller(int r1xul, int r1yul, int r1xbr, int r1ybr, int r2xul, int r2yul, int r2xbr, int r2ybr){
   int area1 = abs(r1xul - r1xbr) * abs(r1yul - r1ybr);
   int area2 = abs(r2xul - r2xbr) * abs(r2yul - r2ybr);
   
   if (area1 < area2){
      return true;
   }
   else{
      return false;
   }
}


int main() {
   int r1xul, r1yul, r1xbr, r1ybr; // x upper-left, y upper-left, x bottom-right, y bottom-right
   int r2xul, r2yul, r2xbr, r2ybr;
   
   cin >> r1xul; cin >> r1yul; cin >> r1xbr; cin >> r1ybr;
   cin >> r2xul; cin >> r2yul; cin >> r2xbr; cin >> r2ybr;

   cout << FirstRectangleSmaller(r1xul, r1yul, r1xbr, r1ybr, r2xul, r2yul, r2xbr, r2ybr) << endl;

   return 0;
}
