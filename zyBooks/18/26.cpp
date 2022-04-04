#include <iostream>
#include <math.h>
using namespace std;

int main() {

   int inch;
   double width;
   double height;
   
   cin >> inch;
   
   width = ceil(sqrt(inch * inch / 2.0));
   
   for (width; width < inch; width++){
      height = sqrt(inch * inch - width * width);
      
      cout << width << " " << height << endl;
   }

   return 0;
}