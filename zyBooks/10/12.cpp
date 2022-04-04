#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
   
   string dataTitle;
   
   cout << "Enter a title for the data:" << endl;
   getline(cin, dataTitle);
   cout << "You entered: " << dataTitle << endl;
   cout << endl;
   
   string col1;
   string col2;
   
   cout << "Enter the column 1 header:" << endl;
   getline(cin, col1);
   cout << "You entered: " << col1 << endl;

   cout << endl;
   
   cout << "Enter the column 2 header:" << endl;
   getline(cin, col2);
   cout << "You entered: " << col2 << endl;
   cout << endl;
   
   istringstream inSS;       
   string lineString;        
   string dataString;
   string dataIntInString;
   int dataInt;
   bool correctInput;
   
   vector<string> authorNames;
   vector<int> numNovels;
   
   cout << "Enter a data point (-1 to stop input):" << endl;
   getline(cin, lineString);
   
   while (lineString != "-1") {
      inSS.clear();
      inSS.str(lineString);
      
      dataInt = 0;
      dataIntInString = "";
      correctInput = true;
      
      getline(inSS , dataString, ',') >> dataIntInString;
      
      if (inSS.eof()){
         if (dataIntInString == ""){
            cout << "Error: No comma in string." << endl;
            correctInput = false;
         }
         else {
            for (int i = 0; i < dataIntInString.size(); i ++){
               if (isdigit(dataIntInString.at(i))){
                  dataInt = dataInt * 10 + (int)dataIntInString.at(i) - (int)'0';
               }
               else{
                  cout << "Error: Comma not followed by an integer." << endl;
                  correctInput = false;
                  break;
               }
            }
         }
      }
      else {
         cout << "Error: Too many commas in input." << endl;
         correctInput = false;
      }
      
      if (correctInput){
         cout << "Data string: " << dataString << endl;
         cout << "Data integer: " << dataInt << endl;
         
         authorNames.push_back(dataString);
         numNovels.push_back(dataInt);
      }
      
      cout << endl;
      cout << "Enter a data point (-1 to stop input):" << endl;
      getline(cin, lineString);
   }
   
   cout << endl;

   cout << setw(33) << right << dataTitle << endl;
   cout << setw(20) << left  << col1 << "|";
   cout << setw(23) << right << col2 << endl;
   
   cout << setfill('-') << setw(44) << "" << endl;
   
   cout << setfill(' ');
   
   
   for (int i = 0; i < authorNames.size(); i++){
      cout << setw(20) << left << authorNames.at(i) << "|";
      cout << setw(23) << right << numNovels.at(i) << endl;
   }
   
   cout << endl;
   
   for (int i = 0; i < authorNames.size(); i++){
      cout << setw(20) << right << authorNames.at(i) << " ";
      cout << setfill('*') << setw(numNovels.at(i)) << "" << endl;
      cout << setfill(' ');
   }
   
   return 0;
}