#include <iostream>
using namespace std;

int main() {

   int input;
   int ft;
   int inch;
   
   cin >> input;
   
   ft = input / 12;
   
   inch = input % 12;
   
   
   cout << ft << "\'" << inch << endl;

   return 0;
}