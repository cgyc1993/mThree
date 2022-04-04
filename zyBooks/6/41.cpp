#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(string text){
   int count = 0;
   
   for (int i = 0; i < text.size(); i++){
      if (!isspace(text.at(i))){
         count++;
      }
   }
   
   return count;
}

void ShortenSpace(string& text){
   string output = "";
   bool space = false;
   
   for (int i = 0; i < text.size(); i++){
      if (isspace(text.at(i))){
         if (space){
            continue;
         }
         else {
            space = true;
            output += text.at(i);
         }
      }
      else {
         space = false;
         output += text.at(i);
      }
   }
   
   text = output;
}

int GetNumOfWords(string text){
   ShortenSpace(text);
   
   int count = 0;
   
   for (int i = 0; i < text.size(); i++){
      if (isspace(text.at(i))){
         count++;
      }
   }
   
   return count + 1;
}

void ReplaceExclamation(string& text){
   for (int i = 0; i < text.size(); i++){
      if (text.at(i) == '!'){
         text.at(i) = '.';
      }
   }
}

int FindText( string searchText, string text){
   int count = 0;
   bool found = true;
      
   for (int i = 0; i < (text.size() - searchText.size() + 1); i++){
      if (text.substr(i, searchText.size()) == searchText){
         count++;
      }
   }
   
   return count;
}

void ExecuteMenu(char option, string text){
   string searchText;
   
   switch (option){
      case 'c':
         cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text) << endl;
         break;
         
      case 'w':
         cout << "Number of words: " << GetNumOfWords(text) << endl;
         break;
         
      case 'f':
         cin.ignore();
         
         cout << "Enter a word or phrase to be found:" << endl;
         getline(cin, searchText);
         
         cout << "\"" << searchText << "\" instances: " << FindText(searchText, text) << endl;
         break;
         
      case 'r':
         ReplaceExclamation(text);
         cout << "Edited text: " << text << endl;
         break;
         
      case 's':
         ShortenSpace(text);
         cout << "Edited text: " << text << endl;
         break;
   }
}

void PrintMenu(){
   cout << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !\'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl ;
}



int main() {
   string sampleText;
   
   cout << "Enter a sample text:" << endl;
   getline(cin, sampleText);
   
   cout << endl << "You entered: " << sampleText << endl;
   
   char option;
   
   while (option != 'q'){
      option = ' ';
   
      cout << endl;
      PrintMenu();
      cout << endl << "Choose an option:";
      
      cout << endl;
      
      while (option != 'c' && option != 'w' && option != 'f' && option != 'r' && option != 's' && option != 'q'){
         cin >> option;
      
         if (option == 'c' || option == 'w' || option == 'f' || option == 'r' || option == 's'){
            ExecuteMenu(option, sampleText);
         }
         else if(option != 'q'){
            cout << "Choose an option:" << endl;
         }
      }
   }

   return 0;
}