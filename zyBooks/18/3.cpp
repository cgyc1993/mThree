#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>

int main() {

   double x1;
   double y1;
   double x2;
   double y2;
   char c;
   
   cin >> c;
   cin >> x1;
   cin >> c;
   cin >> y1;
   cin >> c;
   cin >> c;
   cin >> x2;
   cin >> c;
   cin >> y2;
   
   
   cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
   
   

   return 0;
}