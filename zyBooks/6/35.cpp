#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec){
   int temp;
   
   for (int i = 0; i < myVec.size() - 1; i++){
      for (int j = i + 1; j < myVec.size(); j++){
         if (myVec.at(j) < myVec.at(i)){
            temp = myVec.at(i);
            myVec.at(i) = myVec.at(j);
            myVec.at(j) = temp;
         }
      }
   }
}

int main() {
   int size;
   cin >> size;
   
   vector<int> myVec(size);
   
   for (int i = 0; i < size; i++){
      cin >> myVec.at(i);
   }
   
   SortVector(myVec);
   
   for (int i = 0; i < size; i++){
      cout << myVec.at(i) << " ";
   }
   
   cout << endl;

   return 0;
}
