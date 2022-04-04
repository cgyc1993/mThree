#include <iostream>
#include <string>
using namespace std;

int main() {

   string x;
   
   cin >> x;
   
   cout << "Midfix: " << x.substr(x.size()/2 - 1, 3) << endl;

   return 0;
}