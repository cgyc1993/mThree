#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon){
   return drivenMiles / milesPerGallon * dollarsPerGallon;
}

int main() {
   double milesPerGallon;
   double dollarsPerGallon;
   
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;
   
   cout << fixed << setprecision(2);
   cout << DrivingCost(10, milesPerGallon, dollarsPerGallon) << " " << DrivingCost(50, milesPerGallon, dollarsPerGallon) << " " << DrivingCost(400, milesPerGallon, dollarsPerGallon) << endl;

   return 0;
}
