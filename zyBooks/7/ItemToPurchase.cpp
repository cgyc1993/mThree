#include "ItemToPurchase.h"
#include <iostream>
#include <string>

using namespace std;

ItemToPurchase::ItemToPurchase(){
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

void ItemToPurchase::SetName(string itemName){
   this->itemName = itemName;
}

void ItemToPurchase::SetPrice(int itemPrice){
   this->itemPrice = itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity){
   this->itemQuantity = itemQuantity;
}
      
string ItemToPurchase::GetName(){
   return itemName;
}

int ItemToPurchase::GetPrice(){
   return itemPrice;
}

int ItemToPurchase::GetQuantity(){
   return itemQuantity;
}