#include <iostream>
#include "GVdie.h"
using namespace std;

int RollSpecificNumber(GVdie die, int num, int goal) {
    int count = 0;
    int totalCount = 0;
    
    while (count != goal){
       die.Roll();
       
       if (die.GetValue() == num){
          count++;
       }
       
       totalCount++;
    }
    
    return totalCount;
}

int main() {
	GVdie die = GVdie();
	die.SetSeed(15); // Create a GVdie object with seed value 15
	int num;
	int goal;
	int rolls;

	cin >> num;
	cin >> goal;
	rolls = RollSpecificNumber(die, num, goal);  // Should return the number of rolls 
	cout << "It took " << rolls << " rolls to get a \"" <<  num << "\" " << goal << " times." << endl;

	return 0;
}