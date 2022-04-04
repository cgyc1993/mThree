#include <iostream>
using namespace std;

string isLeap(int y){
   if (y%400 == 0){
      return "true";
   }
   else if (y%4 == 0 && y%100 != 0){
      return "true";
   }
   else{
      return "false";
   }
   
}

int main() {

   int year;
   
   cin >> year;
   
   cout << isLeap(year) << endl;

   return 0;
}