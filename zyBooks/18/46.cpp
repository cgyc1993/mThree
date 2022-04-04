#include <iostream>
#include <math.h>
using namespace std;

int CostForMilesGas(int m){
   const int MILES_PER_GAL = 30;
   const int CENTS_PER_GAL = 4;
   
   return m / static_cast<double>(MILES_PER_GAL) * CENTS_PER_GAL * 100;
}

int CostForMilesMaintenance(int m){
   const int TIRES_CENTS = 500;
   const int TIRES_MILES = 20000;
   
   const int SERVICE_CENTS = 300;
   const int SERVICE_MILES = 10000;
   
   return (m / static_cast<double>(TIRES_MILES) * TIRES_CENTS * 100 + m / static_cast<double>(SERVICE_MILES) * SERVICE_CENTS * 100);
}

int CostForMiles(int m){
   return (CostForMilesGas(m) + CostForMilesMaintenance(m));
}

int main() {
   int mile;
   
   cin >> mile;
   
   cout << CostForMiles(mile) << " cents" << endl;

   return 0;
}