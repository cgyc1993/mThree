#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int age;
   int weight;
   int heartRate;
   int timeInMin;
   double menCalories;
   double womenCalories;
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> timeInMin;
   
   menCalories = (age * 0.2017 + weight * 0.09036 + heartRate * 0.6309 - 55.0969) * timeInMin / 4.184;
   womenCalories = (age * 0.074 - weight * 0.05741 + heartRate * 0.4472 - 20.4022) * timeInMin / 4.184;
   
   cout << fixed << setprecision(2); 
   cout << "Women: " << womenCalories << " calories" << endl;
   cout << "Men: " << menCalories << " calories" << endl;

   return 0;
}
