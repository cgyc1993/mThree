#include "ItemToPurchase27.h"
#include "ShoppingCart.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string ShoppingCart::GetCustomerName(){
   return customerName;
}

string ShoppingCart::GetDate(){
   return currentDate;
}
   

void ShoppingCart::AddItem(ItemToPurchase item){
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName){
   bool found = false;
   
   for (int i = 0; i < cartItems.size(); i++){
      if (cartItems.at(i).GetName() == itemName){
         found = true;
         
         cartItems.erase(cartItems.begin() + i);
         
         break;
      }
   }
   
   if (!found){
      cout << "Item not found in cart. Nothing removed." << endl;
   }
}

void ShoppingCart::ModifyItem(ItemToPurchase item){
   bool found = false;
   
   for (int i = 0; i < cartItems.size(); i++){
      if (cartItems.at(i).GetName() == item.GetName()){
         found = true;
         
         if (item.GetDescription() != "none"){
            cartItems.at(i).SetDescription(item.GetDescription());
         }
         
         if (item.GetPrice() != 0){
            cartItems.at(i).SetPrice(item.GetPrice());
         }
         
         if (item.GetQuantity() != 0){
            cartItems.at(i).SetQuantity(item.GetQuantity());
         }
         
         break;
      }
   }
   
   if (!found){
      cout << "Item not found in cart. Nothing modified." << endl;
   }
}


int ShoppingCart::GetNumItemsInCart(){
   int total = 0;
   
   for (int i = 0; i < cartItems.size(); i++){
      total += cartItems.at(i).GetQuantity();
   }
   
   return total;
}

int ShoppingCart::GetCostOfCart(){
   int total = 0;
   
   for (int i = 0; i < cartItems.size(); i++){
      total += (cartItems.at(i).GetQuantity() * cartItems.at(i).GetPrice());
   }
   
   return total;
}

void ShoppingCart::PrintTotal(){
   cout << customerName << "\'s Shopping Cart - " << currentDate << endl;
   cout << "Number of Items: " << GetNumItemsInCart() << endl;
   
   if (cartItems.size() == 0){
      cout << "\nSHOPPING CART IS EMPTY\n" << endl;
   }
   else {
      cout << endl;
      for (int i = 0; i < cartItems.size(); i++){
         cartItems.at(i).PrintItemCost();
      }
      cout << endl;
   }
   
   cout << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions(){
   cout << customerName << "\'s Shopping Cart - " << currentDate << endl;
   cout << endl;
   cout << "Item Descriptions" << endl;
   for (int i = 0; i < cartItems.size(); i++){
      cartItems.at(i).PrintItemDescription();
   }
}
