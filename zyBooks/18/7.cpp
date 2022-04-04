#include <iostream>
using namespace std;

int main() {
   string userChord;
   
   cin >> userChord;

   if (userChord == "G"){
      cout << "e|-3-\nB|-0-\nG|-0-\nD|-0-\nA|-2-\nE|-3-\n";
   }
   else if (userChord == "C"){
      cout << "e|-0-\nB|-1-\nG|-0-\nD|-2-\nA|-3-\nE|---\n";
   }
   else if (userChord == "D"){
      cout << "e|-2-\nB|-3-\nG|-2-\nD|-0-\nA|---\nE|---\n";
   }
   else{
      cout << userChord << " is not a supported chord." << endl;
   }

   return 0;
}