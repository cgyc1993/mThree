#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   
   double a;
   double b;
   double c;
   
   cin >> a;
   cin >> b;
   
   c = sqrt(a*a + b*b);

   cout << fixed << setprecision(2);
   cout << "Hypotenuse: " << c << endl;

   return 0;
}