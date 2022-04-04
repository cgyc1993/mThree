#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   if ( (highwayNumber > 0) && (highwayNumber < 1000) && (highwayNumber % 100 != 0) ) {
      if (highwayNumber > 100){
         
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ", ";
         highwayNumber %= 100;
      }
      else{
         cout << "I-" << highwayNumber << " is primary, ";
      }
      
      if (highwayNumber % 2 == 0){
         cout << "going east/west." << endl;
      }
      else {
         cout << "going north/south." << endl;
      }
   }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}
