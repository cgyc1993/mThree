#include <iostream>
using namespace std;
#include "ContactNode.h"

int main() {

   ContactNode* headNode;
   ContactNode* currNode;
   ContactNode* lastNode;

   string name;
   string number;

   // Front of nodes list
   headNode = new ContactNode();
   lastNode = headNode;

   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list
   for (int i = 1; i < 4; i++){       
      cout << "Person " << i << endl;
      cout << "Enter name:" << endl;
      getline(cin, name);
      cout << "Enter phone number:" << endl;
      getline(cin, number);
      
      currNode = new ContactNode(name, number);
      
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
      
      cout << "You entered: " << currNode->GetName() << ", " << currNode->GetPhoneNumber() << endl;
      cout << endl;
   }
   
   currNode = headNode->GetNext();
   
   cout << "CONTACT LIST" << endl;
   
   while (currNode != nullptr) {
      currNode->PrintContactNode();
      currNode = currNode->GetNext();
      
      cout << endl;
   }

   return 0;
}
