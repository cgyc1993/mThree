#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double value;

	cin >> value;
	
	cout << fixed << setprecision(1);
	cout << "Sqrt: " << sqrt(value) << endl;
	
	return 0;
}