#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;

   cin >> phoneNumber;
   
   cout << "(" << phoneNumber / 10000000 << ") " << phoneNumber % 10000000 / 10000 << "-" << phoneNumber % 10000 << endl;
   
   return 0;
}
