#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

double MilesToLaps(double userMiles){
   return userMiles / 0.25;
}

int main() {
   double userMiles;
   
   cin >> userMiles;
   
   cout << fixed << setprecision(2);
   cout << MilesToLaps(userMiles) << endl;

   return 0;
}
