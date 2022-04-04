#include <iostream>
using namespace std;

int main() {

   int input;
   int runwayDeg;
   string direction;
   cin >> input;
   
   runwayDeg = input * 10;
   
   if (runwayDeg > (360 - 22.5) && runwayDeg < (0 + 22.5)){
      direction = "north";
   }
   else if (runwayDeg > (45 - 22.5) && runwayDeg < (45 + 22.5)){
      direction = "northeast";
   }
   else if (runwayDeg > (90 - 22.5) && runwayDeg < (90 + 22.5)){
      direction = "east";
   }
   else if (runwayDeg > (135 - 22.5) && runwayDeg < (135 + 22.5)){
      direction = "southeast";
   }
   else if (runwayDeg > (180 - 22.5) && runwayDeg < (180 + 22.5)){
      direction = "south";
   }
   else if (runwayDeg > (225 - 22.5) && runwayDeg < (225 + 22.5)){
      direction = "southwest";
   }
   else if (runwayDeg > (270 - 22.5) && runwayDeg < (270 + 22.5)){
      direction = "west";
   }
   else if (runwayDeg > (270 + 22.5) && runwayDeg < (360 - 22.5)){
      direction = "northwest";
   }
   
   cout << runwayDeg << " degrees (" << direction << ")" << endl;

   return 0;
}