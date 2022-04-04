#include <iostream>
#include <string>
using namespace std;

int main() {

   string input;
   int num;
   
   cin >> input;
   cin >> num;
   
   while (input != "quit") {
      cout << "Eating "<< num << " " << input << " a day keeps you happy and healthy." << endl;
      
      cin >> input;
      cin >> num;
   } 
   

   return 0;
}
