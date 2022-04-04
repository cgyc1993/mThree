#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	VendingMachine vm;
	int purchased;
	int restocks;
	
	cin >> purchased;
	cin >> restocks;
	
	vm.Purchase(purchased);
	vm.Restock(restocks);
	
	vm.Report();
}