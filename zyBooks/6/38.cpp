#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord(vector<string> wordsList, string currWord){
   int count = 0;
   
   for (int i = 0; i < wordsList.size(); i++){
      if (wordsList.at(i) == currWord){
         count++;
      }
   }
   
   return count;
}

int main() {
   
   int size;
   cin >> size;
   
   vector<string> wordsList(size);
   
   for (int i = 0; i < size; i++){
      cin >> wordsList.at(i);
   }
   
   for (int i = 0; i < size; i++){
      cout << wordsList.at(i) << " " << GetFrequencyOfWord(wordsList, wordsList.at(i)) << endl;
   }

   return 0;
}
