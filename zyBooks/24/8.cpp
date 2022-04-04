#include "SimpleCar.h"

#include <iostream>
#include <vector>
using namespace std;

int main() {
	SimpleCar car;
	int drive;
	int reverse;
	
	cin >> drive;
	cin >> reverse;
	
	car.Drive(drive);
	car.Reverse(reverse);
	
	car.HonkHorn();
	
	car.Report();
	return 0;
}