#include <iostream>

#include "Bottles.h"
using namespace std;


Bottles::Bottles(){
    remaining = 21;
}

int Bottles::GetRemainingBottles(){
    return remaining;
}


void Bottles::Picked(int amount){
    remaining -= amount;
}

void Bottles::PrintRemaining(){
    cout << "The bottles remaining are: " << remaining << endl;
}