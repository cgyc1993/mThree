#include "ContactNode.h"
#include <iostream>

ContactNode::ContactNode() {
   contactName = "";
   contactPhoneNum = "";
   nextNodePtr = nullptr;
}

ContactNode::ContactNode(string contactName, string contactPhoneNum) {
   this->contactName = contactName;
   this->contactPhoneNum = contactPhoneNum;
   nextNodePtr = nullptr;
}

ContactNode::ContactNode(string contactName, string contactPhoneNum, ContactNode* nextLoc) {
   this->contactName = contactName;
   this->contactPhoneNum = contactPhoneNum;
   nextNodePtr = nextLoc;
}


void ContactNode::InsertAfter(ContactNode* nodeLoc) {
   ContactNode* tmpNext;
   
   tmpNext = nextNodePtr;
   nextNodePtr = nodeLoc;
   nodeLoc->nextNodePtr = tmpNext;
}

ContactNode* ContactNode::GetNext() {
   return nextNodePtr;
}


string ContactNode::GetName(){
   return contactName;
}

string ContactNode::GetPhoneNumber(){
   return contactPhoneNum;
}


void ContactNode::PrintContactNode(){
   cout << "Name: " << contactName << endl;
   cout << "Phone number: " << contactPhoneNum << endl;
}