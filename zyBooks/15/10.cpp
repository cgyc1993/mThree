#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main () {
   // TODO: Declare a list called shoppingList of type ListItem
   list<ListItem> shoppingList;

   string item;
   
   getline(cin, item);

   // TODO: Read inputs (items) and add them to the shoppingList list
   //       Read inputs until a -1 is input
   while (item != "-1") {
      ListItem shopItem(item);
      shoppingList.push_back(shopItem);
      
      getline(cin, item);
   }


   // TODO: Print the shoppingList list using the PrintNodeData() function
   for (ListItem i : shoppingList){
      i.PrintNodeData();
   }
   

   return 0;
}