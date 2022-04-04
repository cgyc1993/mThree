#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase27.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart {
   private:
      string customerName;
      string currentDate;
      vector <ItemToPurchase> cartItems;
      
   public:
      ShoppingCart(){
         customerName = "none";
         currentDate = "January 1, 2016";
      };
         
      ShoppingCart(string customerName, string currentDate){
         this->customerName = customerName;
         this->currentDate = currentDate;
      };
      
      string GetCustomerName(); 
      string GetDate();
      
      void AddItem(ItemToPurchase item);
      void RemoveItem(string itemName);
      void ModifyItem(ItemToPurchase item);
      
      int GetNumItemsInCart();
      int GetCostOfCart();
      
      void PrintTotal();
      void PrintDescriptions();
};

#endif