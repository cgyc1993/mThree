#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int hour, bool isMorning, bool isWeekend) {
	if (isWeekend){
      if (isMorning){
         if (hour >= 1 && hour < 7 || hour == 12) {
            return 1.05;
         }
         else if (hour >= 7 && hour < 12) {
            return 2.15;
         }
      }
      else {
         if (hour >= 1 && hour < 8 || hour == 12) {
            return 2.15;
         }
         else if (hour >= 8 && hour < 12) {
            return 1.10;
         }
      }
   }
   else {
      if (isMorning){
         if (hour >= 1 && hour < 7 || hour == 12) {
            return 1.15;
         }
         else if (hour >= 7 && hour < 10) {
            return 2.95;
         }
         else if (hour >= 10 && hour < 12) {
            return 1.90;
         }
      }
      else {
         if (hour >= 1 && hour < 3 || hour == 12) {
            return 1.90;
         }
         else if (hour >= 3 && hour < 8) {
            return 3.95;
         }
         else if (hour >= 8 && hour < 12) {
            return 1.40;
         }
      }
   }
}

int main() {
	cout << CalcToll(8, true, false) << endl;   // 2.95
	cout << CalcToll(1, false, false) << endl;  // 1.9
	cout << CalcToll(3, false, true) << endl;   // 2.15
	cout << CalcToll(5, true, true) << endl;    // 1.05

	return 0;
}