#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   double a;
   double b;
   double c;
   double s;
   double area;
   
   cin >> a >> b >> c;
   
   s = (a + b + c) / 2.0;
   
   area = sqrt(s * (s - a) * (s - b) * (s - c));
   
   cout << fixed << setprecision(3) << "The area of the triangle is: " << area << endl;

   return 0;
}
