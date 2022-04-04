#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   cin >> quarters;
   cin >> dimes;
   cin >> nickels;
   cin >> pennies;
   
   cout << fixed << setprecision(2); 
   cout << "Amount: $" << 0.25 * quarters + 0.1 * dimes + 0.05 * nickels + 0.01 * pennies << endl;
   
   return 0;
}