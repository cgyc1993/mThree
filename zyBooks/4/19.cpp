#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   bool digitInput = true;
   
   cin >> userString;

   for (int i = 0; i < userString.size(); i++){
      if (!isdigit(userString.at(i))){
         digitInput = false;
         break;
      }
   }
   
   if (digitInput){
      cout << "Yes" << endl;
   }
   else {
      cout << "No" << endl;
   }

   return 0;
}
