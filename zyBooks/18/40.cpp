#include <iostream>
using namespace std;

void Ascend3(int& x, int& y, int& z){
   int temp;
   
   if (x > y){
      temp = x;
      x = y;
      y= temp;
   }
   
   if (x > z){
      temp = x;
      x = z;
      z = temp;
   }
   
   if (y > z){
      temp = y;
      y = z;
      z = temp;
   }
}

int main() {
   
   int x, y, z;
   
   cin >> x; 
   cin >> y;
   cin >> z;
   
   Ascend3(x, y, z);
   
   cout << x << " " << y << " " << z << endl;


   return 0;
}