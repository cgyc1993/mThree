#include <iostream>

#include "RandomNumbers.h"
using namespace std;

void RandomNumbers::SetRandomValues(int low, int high){
   if (high == low) {
      high++;
   }
   
   var1 = rand() % (high - low) + low;
   var2 = rand() % (high - low) + low;
   var3 = rand() % (high - low) + low;
}

void RandomNumbers::GetRandomValues(){
   cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}


int RandomNumbers::GetVar1(){
   return var1;
}

int RandomNumbers::GetVar2(){
   return var2;
}

int RandomNumbers::GetVar3(){
   return var3;
}
