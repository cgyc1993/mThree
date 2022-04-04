#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;

   cin >> seconds;
   hours = seconds / 3600;
   minutes = seconds % 3600 / 60;
   seconds = seconds % 3600 % 60;
   
   cout << "Hours: " << hours << endl;
   cout << "Minutes: " << minutes << endl;
   cout << "Seconds: " << seconds << endl;

   return 0;
}