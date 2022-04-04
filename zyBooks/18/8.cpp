#include <iostream>
#include <string>
using namespace std;

int main() {

   int hoursAmPm;
   string minAmPm;
   string hours24;
   string amPm;
   
   cin >> hoursAmPm >> minAmPm >> amPm;
   
   if (amPm == "am") {
      if (hoursAmPm == 12){
         hours24 = "00";
      }
      else if (hoursAmPm < 10){
         hours24 = "0" + hoursAmPm;
      }
      else {
         hours24 = to_string(hoursAmPm);
      }
   }
   else if (amPm == "pm"){
      if (hoursAmPm == 12){
         hours24 = "12";
      }
      else {
         hours24 = to_string(hoursAmPm + 12);
      }
   }
   
   cout << hours24 << ":" << minAmPm << endl;
   

   return 0;
}