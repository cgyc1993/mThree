#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1;
	string str2;
	string longest;

   cin >> str1;
   cin >> str2;
   
   if (str1.size() > str2.size()){
      longest = str1;
   }
   else{
      longest = str2;
   }
   
   cout << longest << endl;

   return 0;
}