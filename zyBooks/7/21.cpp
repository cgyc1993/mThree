#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char* argv[]) {
   Triangle triangle1;
   Triangle triangle2;

   double inputB;
   double inputH;
   
   cin >> inputB;
   cin >> inputH;
   triangle1.SetBase(inputB);
   triangle1.SetHeight(inputH);
   
   cin >> inputB;
   cin >> inputH;
   triangle2.SetBase(inputB);
   triangle2.SetHeight(inputH);
   
   // TODO: Determine larger triangle (use GetArea())      
   cout << "Triangle with larger area:" << endl;
   
   if (triangle1.GetArea() >= triangle2.GetArea()){
      triangle1.PrintInfo();
   }
   else{
      triangle2.PrintInfo();
   }
   
   return 0;
}