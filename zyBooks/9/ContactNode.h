#ifndef CONTACT_NODE_H
#define CONTACT_NODE_H

#include <string>
using namespace std;

class ContactNode {
   public:
      ContactNode();
      ContactNode(string contactName, string contactPhoneNum);
      ContactNode(string contactName, string contactPhoneNum, ContactNode* nextLoc);

      void InsertAfter(ContactNode* nodeLoc);
      ContactNode* GetNext();
      
      string GetName();
      string GetPhoneNumber();

      void PrintContactNode();

   
   private:
      string contactName;
      string contactPhoneNum;
      ContactNode* nextNodePtr;
};

#endif