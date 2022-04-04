#include <iostream>
#include <vector>
using namespace std;

void SimulateLine(vector<int> customerArrivals) {
   int currCustomer = 0;
   
   for (unsigned int i = 0; i < customerArrivals.size(); i++){
      if (currCustomer == 0){
         currCustomer +=  customerArrivals.at(i);
      }
      else {
         currCustomer +=  customerArrivals.at(i) - 1;
      }
      
      cout << currCustomer << " ";
   }
   
   cout << endl;
   
}


int main() {
   int i;
   vector<int> customerArrivals(10);
   
   // Get customer arrival data
   for (i = 0; i < 10; ++i) {
      cin >> customerArrivals.at(i);
   }

   SimulateLine(customerArrivals);

   return 0;
}