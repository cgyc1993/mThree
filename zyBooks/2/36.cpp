#include <iostream>
#include <cmath>                   // Note: Needed for math functions in part (3)
#include <iomanip>                 // For setprecision
using namespace std;

int main() {
   double wallHeight;
   double wallWidth;
   double wallArea;
   
   cout << "Enter wall height (feet):" << endl;
   cin  >> wallHeight;
   
   cout << "Enter wall width (feet):" << endl;
   cin  >> wallWidth;      // FIXME (1): Prompt user to input wall's width
   
   // Calculate and output wall area
   wallArea = static_cast<double>(wallHeight) * static_cast<double>(wallWidth);     // FIXME (1): Calculate the wall's area
   cout << fixed << setprecision(2); 
   cout << "Wall area: " << wallArea << " square feet" << endl;  // FIXME (1): Finish the output statement
   
   
   // FIXME (2): Calculate and output the amount of paint in gallons needed to paint the wall
   
   cout << "Paint needed: " << wallArea / 350.0 << " gallons" << endl;
   // FIXME (3): Calculate and output the number of 1 gallon cans needed to paint the wall, rounded up to nearest integer
   cout << "Cans needed: " << static_cast<int>(round(wallArea / 350.0)) << " can(s)" << endl;

   return 0;
}