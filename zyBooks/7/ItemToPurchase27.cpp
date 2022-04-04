#include "ItemToPurchase27.h"
#include <iostream>
#include <string>

using namespace std;

ItemToPurchase::ItemToPurchase(){
   itemName = "none";
   itemDescription = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity){
   this->itemName = itemName;
   this->itemDescription = itemDescription;
   this->itemPrice = itemPrice;
   this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(string itemName){
   this->itemName = itemName;
}

void ItemToPurchase::SetDescription(string itemDescription){
   this->itemDescription = itemDescription;
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

string ItemToPurchase::GetDescription(){
   return itemDescription;
}

int ItemToPurchase::GetPrice(){
   return itemPrice;
}

int ItemToPurchase::GetQuantity(){
   return itemQuantity;
}

void ItemToPurchase::PrintItemCost(){
   cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}

void ItemToPurchase::PrintItemDescription(){
   cout << itemName << ": " << itemDescription << endl;
}
