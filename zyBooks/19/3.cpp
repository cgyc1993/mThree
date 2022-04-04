#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double radius;
	double height;
	double volume;
	double area;

	cin >> radius;
	cin >> height;
	
	volume = M_PI * pow(radius, 2) * height;
	area = 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2);
	
	cout << fixed << setprecision(1);
	cout << "Volume: " << volume << " cubic inches" << endl;
	cout << "Surface area: " << area << " square inches" << endl;
	
	return 0;
}