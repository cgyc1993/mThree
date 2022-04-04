#include <iostream>
using namespace std;

void CentsToDollarsCents (int totalCents, int& dollar, int& cent){
   dollar = totalCents / 100;
   cent = totalCents % 100;
}

int main() {

   int totalCents;
   int dollar;
   int cent;
   
   cin >> totalCents;
   
   CentsToDollarsCents(totalCents, dollar, cent);
   
   cout << dollar << " dollars " << cent << " cents" << endl;

   return 0;
}