#include <iostream>
#include <vector>
// FIXME include vector library
using namespace std;

int main() {

   const int size = 5;
   vector<int> jersey(size);
   vector<int> rating(size);
   char option = ' ';
   
   for (int i = 0; i < size; i++){
      cout << "Enter player "<< i + 1 <<"\'s jersey number:" << endl;
      cin >> jersey.at(i);
      
      cout << "Enter player "<< i + 1 <<"\'s rating:" << endl;
      cin >> rating.at(i);
      
      cout << endl;
   }
   
   cout << "ROSTER" << endl;
   
   
   for (int i = 0; i < size; i++){
      cout << "Player " << i + 1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
   }
   
   while (option != 'q'){   
      cout << endl << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl << endl;
      
      cout << "Choose an option:" << endl;
      cin >> option;
      
      switch (option){
         case 'o':
            cout << "ROSTER" << endl;
      
            for (int i = 0; i < jersey.size(); i++){
               cout << "Player " << i + 1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
            }
            break;
            
         case 'r':
            cout << endl << "Enter a rating:" << endl;
            int rateAbove;
            cin >> rateAbove;
            
            cout << endl << "ABOVE " << rateAbove << endl;
            
            for (int i = 0; i < jersey.size(); i++){
               if (rating.at(i) > rateAbove) {
                  cout << "Player " << i + 1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
               }
            }
            break;
            
         case 'a':
            jersey.resize(jersey.size() + 1);
            rating.resize(rating.size() + 1);
         
            cout << endl << "Enter a new player's jersey number:" << endl;
            cin >> jersey.at(jersey.size() - 1);
            
            cout << "Enter the player's rating:" << endl;
            cin >> rating.at(rating.size() - 1);
            break;
            
         case 'd':
            int del;
         
            cout << endl << "Enter a jersey number:" << endl;
            cin >> del;
            
            for (int i = 0; i < jersey.size(); i++){
               if (jersey.at(i) == del) {
                  for (int j = i; j < jersey.size() - 1; j++){
                     jersey.at(j) = jersey.at(j + 1);
                     rating.at(j) = rating.at(j + 1);
                  }
                  
                  jersey.resize(jersey.size() - 1);
                  rating.resize(rating.size() - 1);
                  
                  break;
               }
            }
            break;
            
         case 'u':
            int update;
         
            cout << endl << "Enter a jersey number:" << endl;
            cin >> update;
            
            for (int i = 0; i < jersey.size(); i++){
               if (jersey.at(i) == update) {
                  cout << endl << "Enter a new rating for player:" << endl;
                  cin >> rating.at(i);
                  break;
               }
            }
            break;
      }
   }
   
   
   return 0;
}