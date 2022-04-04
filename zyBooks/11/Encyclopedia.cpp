#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string s){
   edition = s;
}

void Encyclopedia::SetNumVolumes(int n){
   numVolumes = n;
}

string Encyclopedia::GetEdition(){
   return edition;
}

int Encyclopedia::GetNumVolumes(){
   return numVolumes;
}

void Encyclopedia::PrintInfo(){
   Book::PrintInfo();
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Volumes: " << numVolumes << endl;
}