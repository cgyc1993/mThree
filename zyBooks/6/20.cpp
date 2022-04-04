#include <iostream>
#include <iomanip>
using namespace std;

int FeetToSteps(double userFeet){
   return (userFeet / 2.5);
}

int main() {
   double userFeet;
   
   cin >> userFeet;
   
   cout << FeetToSteps(userFeet) << endl;

   return 0;
}
