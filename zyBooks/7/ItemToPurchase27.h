#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   private:
      string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;
      
   public:
      ItemToPurchase();
      ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity);
   
      void SetName(string itemName);
      void SetDescription(string itemDescription);
      void SetPrice(int itemPrice);
      void SetQuantity(int itemQuantity);
      
      string GetName(); 
      string GetDescription();
      int GetPrice();
      int GetQuantity();
      
      void PrintItemCost();
      void PrintItemDescription();
};

#endif