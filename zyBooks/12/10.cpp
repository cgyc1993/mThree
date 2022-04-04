#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(vector<string> &permList, const vector<string> &nameList) {
   vector<string> tmpList;
   string tmpName;

   if (nameList.size() == 0) {
      for (size_t i = 0; i < permList.size(); ++i) { 
         cout << permList.at(i);
         
         if (i != (permList.size() - 1)){
            cout << ", ";
         }
         else{
            cout << endl;
         }
      }
   }
   else {
      for (size_t i = 0; i < nameList.size(); ++i) {
         tmpList = nameList; // Make a copy.
         tmpName = tmpList.at(i); 
         
         tmpList.erase(tmpList.begin() + i); // Remove element at i
         
         permList.push_back(tmpName);
         
         PrintAllPermutations(permList, tmpList);
         
         permList.erase(permList.end() - 1); // Remove last element
      }
   }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   cin >> name;
   
   while (name != "-1"){
      nameList.push_back(name);
      
      cin >> name;
   }
   
   PrintAllPermutations(permList, nameList);
   
   return 0;
}