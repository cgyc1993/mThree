#include <iostream>
#include <math.h>
using namespace std;

int main() {

   int ais;
   double score;
   
   cin >> ais;
   
   for (double i = 3.0; i < 4.1 ; i = i + 0.1){
      score = (ais - (2.5 * (i/4.0) * 100.0)) / 100.0 * 1600.0;
      
      cout << i << " " << score << endl;
   }

   return 0;
}