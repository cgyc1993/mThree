#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   private:
      string itemName;
      int itemPrice;
      int itemQuantity;
      
   public:
      ItemToPurchase();
   
      void SetName(string itemName);
      void SetPrice(int itemPrice);
      void SetQuantity(int itemQuantity);
      
      string GetName();
      int GetPrice();
      int GetQuantity();
};

#endif