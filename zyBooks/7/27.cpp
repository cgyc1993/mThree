#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase27.h"

void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   ItemToPurchase item;
   string itemName;
   string itemDescription;
   int itemPrice;
   int itemQuantity;
   
   switch (option){
      case 'a':
         cin.ignore();
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getline(cin, itemName);
         cout << "Enter the item description:" << endl;
         getline(cin, itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         
         item.SetName(itemName);
         item.SetDescription(itemDescription);
         item.SetPrice(itemPrice);
         item.SetQuantity(itemQuantity);
         
         theCart.AddItem(item);
         cout << endl;
         break;
      
      case 'd':
         cin.ignore();
         cout << "REMOVE ITEM FROM CART" << endl; 
         cout << "Enter name of item to remove:" << endl;
         getline(cin, itemName);
         
         theCart.RemoveItem(itemName);
         cout << endl;
         break;
      
      case 'c':
         cin.ignore();
         cout << "CHANGE ITEM QUANTITY" << endl; 
         cout << "Enter the item name:" << endl;
         getline(cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> itemQuantity;
         
         item.SetName(itemName);
         item.SetQuantity(itemQuantity);
         
         theCart.ModifyItem(item);
         cout << endl;
         break;
      
      case 'i':
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         theCart.PrintDescriptions();
         cout << endl;
         break;
      
      case 'o':
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
         cout << endl;
         break;

   }
}

int main() {
   string name;
   string date;
   char option = ' ';
   
   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   cout << "Enter today's date:" << endl;
   getline(cin, date);
   
   cout << endl;
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;
   
   ShoppingCart theCart(name, date);
   cout << endl;
   
   while (option != 'q'){
      PrintMenu();
      cout << endl;
      
      cout << "Choose an option:" << endl;
      cin >> option;
      
      while (option != 'q' && option != 'a' && option != 'd' && option != 'c' && option != 'i' && option != 'o'){
         cout << "Choose an option:" << endl;
         cin >> option;
      }
      ExecuteMenu(option, theCart);
   }
   
   return 0;
}