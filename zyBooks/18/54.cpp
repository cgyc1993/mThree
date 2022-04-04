#include <iostream>
#include <string>
using namespace std;

void cord(string cordInput, string& e, string& b, string& g, string& d, string& a, string& bigE){
   switch (cordInput.at(0)){
      case 'G':
         e += "3-";
         b += "0-";
         g += "0-";
         d += "0-";
         a += "2-";
         bigE += "3-";
         break;
         
      case 'C':
         e += "0-";
         b += "1-";
         g += "0-";
         d += "2-";
         a += "3-";
         bigE += "--";
         break;
         
      case 'D':
         e += "2-";
         b += "3-";
         g += "2-";
         d += "0-";
         a += "--";
         bigE += "--";
         break;
   }
}

int main() {

   int n;
   cin >> n;
   
   string cordInput;
   
   string e = "e|-";
   string b = "B|-";
   string g = "G|-";
   string d = "D|-";
   string a = "A|-";
   string bigE = "E|-";
   
   for (int i = 0; i < n; i++){
      cin >> cordInput;
      cord(cordInput, e, b, g, d, a, bigE);
   }
   
   cout << e << endl;
   cout << b << endl;
   cout << g << endl;
   cout << d << endl;
   cout << a << endl;
   cout << bigE << endl;

   return 0;
}