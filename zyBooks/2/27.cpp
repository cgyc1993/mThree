#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {
   double carMilePerGallon;
   double gasDollarPerGallon;
   
   cin >> carMilePerGallon;
   cin >> gasDollarPerGallon;
   
   cout << fixed << setprecision(2);
   cout << (20 / carMilePerGallon) * gasDollarPerGallon << " ";
   cout << (75 / carMilePerGallon) * gasDollarPerGallon << " ";
   cout << (500 / carMilePerGallon) * gasDollarPerGallon << endl;
   

   return 0;
}
