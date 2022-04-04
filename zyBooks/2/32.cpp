#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   double f0;
   const long double r = pow(2.0, (1.0/12.0));
   
   cin >> f0;
   
   cout << fixed << setprecision(2);
   cout << f0 * pow(r, 0) << " ";
   cout << f0 * pow(r, 1) << " ";
   cout << f0 * pow(r, 2) << " ";
   cout << f0 * pow(r, 3) << " ";
   cout << f0 * pow(r, 4) << endl;

   return 0;
}
