#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers
void PrintVector(vector<Plant*> myGarden){
   for (size_t i = 0; i < myGarden.size(); ++i) {
      myGarden.at(i) -> PrintInfo();
      cout << endl;
   }
}

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual
   string plantName;
   int plantCost;
   
   string flowerName;
   int flowerCost;
   string colorOfFlowers;
   bool isAnnual;
   
   string input;

   cin >> input;

   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
      if (input == "plant"){
         Plant* p = new Plant();
         
         cin >> plantName >> plantCost;
         
         p->SetPlantName(plantName);
         p->SetPlantCost(plantCost);
         
         myGarden.push_back(p);
      }
      else {
         Flower* f = new Flower();
         cin >> flowerName >> flowerCost >> input >> colorOfFlowers;
         
         f->SetPlantName(flowerName);
         f->SetPlantCost(flowerCost);
         if (input == "false"){
            isAnnual = false;
         }
         else {
            isAnnual = true;
         }
         f->SetPlantType(isAnnual);
         f->SetColorOfFlowers(colorOfFlowers);
         
         myGarden.push_back(f);
      }
      
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
   PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}