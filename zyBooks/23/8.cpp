#include <iostream>
#include <math.h>
using namespace std;

int Convert(double num){
   return floor(num);
}

int main() {
	cout << Convert(19.9) << endl;
	cout << Convert(3.1) << endl;

	return 0;
}