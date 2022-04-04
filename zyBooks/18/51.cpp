#include <iostream>
#include <string>
using namespace std;

string NumToStringWithCommas(int n){
   string result = "";
   
   if (n < 1000){
      return to_string(n);
   }
   else {
      while (n > 0){
         if (n%1000 == 0){
            result = "000" + result;
         }
         else if (n%1000 < 10){
            result = "00" + to_string(n%1000) + result;
         }
         else if (n%1000 < 100){
            result = "0" + to_string(n%1000) + result;
         }
         else {
            result = to_string(n%1000) + result;
         }
         
         n /= 1000;
         
         if(n < 1000){
            return (to_string(n) + "," + result);
         }
         else{
            result = ","  + result;
         }
      }
   }
}   


int main() {
   int userNum;
   
   cin >> userNum;
   
   cout << NumToStringWithCommas(userNum) << endl;
   
   return 0;
}