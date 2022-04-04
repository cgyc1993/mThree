#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;

   if (inputMonth == "January") {
      if (inputDay >= 1 && inputDay <= 31){
         cout << "Winter" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "February"){
      if (inputDay >= 1 && inputDay <= 29){
         cout << "Winter" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "March"){
      if (inputDay >= 1 && inputDay <= 19){
         cout << "Winter" << endl;
      }
      else if (inputDay >= 20 && inputDay <= 31) {
         cout << "Spring" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "April"){
      if (inputDay >= 1 && inputDay <= 30){
         cout << "Spring" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "May"){
      if (inputDay >= 1 && inputDay <= 31){
         cout << "Spring" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "June"){
      if (inputDay >= 1 && inputDay <= 20){
         cout << "Spring" << endl;
      }
      else if (inputDay >= 21 && inputDay <= 30) {
         cout << "Summer" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "July"){
      if (inputDay >= 1 && inputDay <= 31){
         cout << "Summer" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "August"){
      if (inputDay >= 1 && inputDay <= 31){
         cout << "Summer" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "September"){
      if (inputDay >= 1 && inputDay <= 21){
         cout << "Summer" << endl;
      }
      else if (inputDay >= 22 && inputDay <= 30) {
         cout << "Autumn" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }     
   else if (inputMonth == "October"){
      if (inputDay >= 1 && inputDay <= 31){
         cout << "Autumn" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "November"){
      if (inputDay >= 1 && inputDay <= 30){
         cout << "Autumn" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else if (inputMonth == "December"){
      if (inputDay >= 1 && inputDay <= 20){
         cout << "Autumn" << endl;
      }
      else if (inputDay >= 21 && inputDay <= 31) {
         cout << "Winter" << endl;
      }
      else{
         cout << "Invalid" << endl;
      }
   }
   else{
      cout << "Invalid" << endl;
   }

   return 0;
}