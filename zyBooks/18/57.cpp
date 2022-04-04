#include <iostream>
using namespace std;

string phone(string n){
   return "(" + n.substr(0, 3) + ") " + n.substr(3, 3) + "-" + n.substr(6, 4);
}

int main() {

   string n;
   
   cin >> n;
   
   cout << phone(n) << endl;

   return 0;
}