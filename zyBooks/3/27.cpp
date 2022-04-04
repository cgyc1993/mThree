#include <iostream>
#include <string>
using namespace std;

int main() {

   string input1;
   string input2;
   string input3;
   
   cin >> input1;
   cin >> input2;
   cin >> input3;
   
   if (input3.size() > 0){
      cout << input3 << ", " << input1.at(0) << "." << input2.at(0) << "." << endl;
   }
   else{
      cout << input2 << ", " << input1.at(0) << "." << endl;
   }

   return 0;
}