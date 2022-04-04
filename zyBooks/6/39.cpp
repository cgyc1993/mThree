#include <iostream>
#include <vector>
#include <string>
using namespace std;

int FindWordInWordList(vector<string> wordList, string wordToFind){
   for (int i = 0; i < wordList.size(); i++){
      if (wordList.at(i) == wordToFind){
         return i;
      }
   }
   
   return -1;
}

int main() {
   int wordLocation;
   
   int size1;
   cin >> size1;
   
   vector<string> original(size1);
   vector<string> replacements(size1);
   
   for (int i = 0; i < size1; i++){
      cin >> original.at(i);
      cin >> replacements.at(i);
   }

   int size2;
   cin >> size2;
   
   vector<string> wordList(size2);
   
   for (int i = 0; i < size2; i++){
      cin >> wordList.at(i);
   }

   for (int i = 0; i < size1; i++){
      wordLocation = FindWordInWordList(wordList, original.at(i));
      
      while (wordLocation != -1){
         wordList.at(wordLocation) = replacements.at(i);
         
         wordLocation = FindWordInWordList(wordList, original.at(i));
      }
   }
   
   for (int i = 0; i < size2; i++){
      cout << wordList.at(i) << " ";
   }
   
   cout << endl;
   
   return 0;
}
