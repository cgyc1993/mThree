#include <iostream>
using namespace std;

int main() {

   int mth;
   int day;
   int year;
   
   int dayInMth;
   
   cin >> mth >> day >> year;
   
   if (mth == 2) {
      dayInMth = 28;
   }
   else if (mth <= 7) {
      if (mth % 2 == 0) {
         dayInMth = 30;
      }
      else {
         dayInMth = 31;
      }
   }
   else {
      if (mth % 2 == 0) {
         dayInMth = 31;
      }
      else {
         dayInMth = 30;
      }
   }
   
   if (dayInMth == day){
      day = 1;
      if (mth == 12){
         mth = 1;
         year++;
      }
      else {
         mth++;
      }
   }
   else {
      day++;
   }
   
   cout << mth << " " << day << " " << year << endl;

   return 0;
}