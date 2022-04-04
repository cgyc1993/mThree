#include <iostream>
using namespace std;

int main() {
   string userCaption; 
   
   getline(cin, userCaption);

   switch (userCaption.at(userCaption.size() - 1)){
      case '!':
         cout << userCaption << endl;
         break;
         
      case '?':
         cout << userCaption << endl;
         break;
         
      case ',':
         userCaption.at(userCaption.size() - 1) = '.';
         cout << userCaption << endl;
         break;
         
      case '.':
         if (userCaption.size() > 1) {
            if (userCaption.size() == 2) {
               if (userCaption.at(userCaption.size() - 2) == '.'){
                  userCaption.pop_back();
               }
            }
            else if (userCaption.at(userCaption.size() - 2) == '.' && userCaption.at(userCaption.size() - 3) != '.'){
               userCaption.pop_back();
            }
         }
                  
         cout << userCaption << endl;
         break;
         
      default:
         userCaption.push_back('.');
         cout << userCaption << endl;
         break;
   }

   return 0;
}