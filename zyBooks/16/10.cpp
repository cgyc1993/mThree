#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void SelectionSortDescendTrace(int numbers [], int numElements) {
   int max;
   int temp;
   
   for (int  i = 0; i < (numElements-1); i++){
      max = i;
      
      for (int j = i + 1; j < numElements; j++){
         if (numbers[j] > numbers[max]){
            max = j;
         }
      }
      
      if (max != i){
         temp = numbers[i];
         numbers[i] = numbers[max];
         numbers[max] = temp;
      }
      
      for (int  j = 0; j < numElements; j++){
         cout << numbers[j] << " ";
      }
      
      cout << endl;
   }
}


int main(int argc, char* argv[]) {
   int input, i = 0;
   int numElements = 0;
   int numbers [10];

   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.
   cin >> input;
   
   while (input != -1 && numElements < 10){
      numbers[numElements] = input;
      numElements++;
      
      cin >> input;
   }
   
   SelectionSortDescendTrace(numbers, numElements);

  return 0;
}