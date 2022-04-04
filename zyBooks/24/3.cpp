#include <iostream>
#include "GVdie.h"
using namespace std;

int RollingForPair(GVdie d1, GVdie d2, int val) {
	int count = 1;
	d1.Roll();
	d2.Roll();
	
	while ((d1.GetValue() != d2.GetValue()) || (d1.GetValue() != val)) {
	   d1.Roll();
	   d2.Roll();
	   count++;
	}
	
	return count;
}

int main() {
	GVdie d1 = GVdie();
	GVdie d2 = GVdie();
	d1.SetSeed(15); // Create a GVdie object with seed value 15
   d2.SetSeed(15); // Create a GVdie object with seed value 15
	int rolls;
	int val;

	cin >> val;
	rolls = RollingForPair(d1, d2, val);
	cout << "It took " << rolls << " rolls to get a pair of " << val << "'s.";

	return 0;
}