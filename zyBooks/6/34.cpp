#include <iostream>
#include <vector>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName){
   string output = "";
   
   for (int i = 0; i < nameVec.size(); i++){
      if (nameVec.at(i) == contactName){
         return phoneNumberVec.at(i);
      }
   }
   
   return output;
   
}

int main() {
   int size;
   
   cin >> size;
   
   vector<string> nameVec(size);
   vector<string> phoneNumberVec(size);
   string contactName;
   
   for (int i = 0; i < size; i++){
      cin >> nameVec.at(i);
      cin >> phoneNumberVec.at(i);
   }
   
   cin >> contactName;
   
   cout << GetPhoneNumber(nameVec, phoneNumberVec, contactName) << endl;

   return 0;
}
