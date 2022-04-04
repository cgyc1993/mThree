#include <iostream>
#include <vector> 
using namespace std;

int GetMinimumInt(vector<int> listInts){
   int min = listInts.at(0);
   
   for (int i = 1; i < listInts.size(); i++){
      if (listInts.at(i) < min){
         min = listInts.at(i);
      }
   }
   
   return min;
}

int main() {
   int size;
   cin >> size;
   
   vector<int> listInts(size);
   int min;
   
   for (int i = 0; i < size; i++){
      cin >> listInts.at(i);
   }
   
   min = GetMinimumInt(listInts);
   
   for (int i = 0; i < size; i++){
      cout << listInts.at(i) - min << " ";
   }
   
   cout << endl;

   return 0;
}
