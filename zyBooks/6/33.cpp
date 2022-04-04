#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec){
   for (int i = 0; i < myVec.size(); i++){
      if (myVec.at(i) % 2 == 1){
         return false;
      }
   }
   
   return true;
}

bool IsVectorOdd(vector<int> myVec){
   for (int i = 0; i < myVec.size(); i++){
      if (myVec.at(i) % 2 == 0){
         return false;
      }
   }
   
   return true;    
}

int main() {
   int size;
   
   cin >> size;
   
   vector<int> vecInput(size);
   
   for (int i = 0; i < size; i++){
      cin >> vecInput.at(i);
   }
   
   if (IsVectorEven(vecInput)){
      cout << "all even" << endl;
   }
   else if (IsVectorOdd(vecInput)){
      cout << "all odd" << endl;
   }
   else{
      cout << "not even or odd" << endl;
   }

   return 0;
}
