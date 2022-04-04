#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase item1;
   ItemToPurchase item2;
   string itemName;
   int itemPrice;
   int itemQuantity;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   
   item1.SetName(itemName);
   item1.SetPrice(itemPrice);
   item1.SetQuantity(itemQuantity);
   
   cin.ignore();
   
   cout << endl << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   getline(cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   
   item2.SetName(itemName);
   item2.SetPrice(itemPrice);
   item2.SetQuantity(itemQuantity);
   
   cout << endl << "TOTAL COST" << endl;
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;
   cout << endl;
   cout << "Total: $" << item1.GetPrice() * item1.GetQuantity() + item2.GetPrice() * item2.GetQuantity() << endl;
   
   return 0;
}