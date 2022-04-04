#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


int main() {

   vector<string> input;
   int size;
   char inputChar;
   
   cin >> size;
   
   input.resize(size);
   
   for (int i = 0; i < size; i++){
      cin >> input.at(i);
   }
   
   cin >> inputChar;
   
   for (int i = 0; i < size; i++){
      if ( input.at(i).find(inputChar) != string::npos ){
         cout << input.at(i) << ",";
      }
   } 

   return 0;
}
