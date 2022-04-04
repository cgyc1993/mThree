#include <iostream>
#include <vector>
using namespace std;

int DigitsToNum(vector<int> digitsList){
   int total = 0;
      
   for (int i = (digitsList.size() - 1); i >= 0 ; i--){
      total = total * 10 + (int)digitsList.at(i);
   }
   
   return total;
}


int main() {
   int userDigit;
   vector<int> digitsList; 
   int resultNum;
   
   while (cin >> userDigit) {
      digitsList.push_back(userDigit);
   }
   
   resultNum = DigitsToNum(digitsList);
   
   cout << resultNum << endl;

   return 0;
}