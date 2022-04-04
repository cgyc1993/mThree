#include <iostream>
using namespace std;

double ActivityCalories(string act, int min){
   if (act == "sit"){
      return min * 1.4;
   }
   
   if (act == "walk"){
      return min * 5.4;
   }
   
   if (act == "run"){
      return min * 13.0;
   }
   
   if (act == "bike"){
      return min * 6.8;
   }
   
   if (act == "swim"){
      return min * 8.7;
   }
}

int main() {
   int userMinutes;
   string userActivity; 
   
   cin >> userActivity;
   cin >> userMinutes;
   
   cout << ActivityCalories(userActivity, userMinutes) << endl;
   
   return 0;
}