#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int n;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;

   // TODO: Read in the number of nodes
   cin >> n;

   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list
   for (int i = 0; i < n; i++){       
      cin >> miles;
      cin >> date;
      currNode = new MileageTrackerNode(miles, date);
      
      lastNode->InsertAfter(currNode); // Append curr
      lastNode = currNode;             // Curr is the new last item
   }
   
   // TODO: Call the PrintNodeData() method
   //       to print the entire linked list
   currNode = headNode;                // Print the list
   currNode = currNode->GetNext();
   
   while (currNode != nullptr) {
      currNode->PrintNodeData();
      currNode = currNode->GetNext();
   }

   // MileageTrackerNode Destructor deletes all
   //       following nodes
   delete headNode;
}