#include <iostream>
#include <string>
using namespace std;

int main() {
	int par;
	int strokes;
	string name;

	cin >> par;
	
	if (par < 3 || par > 5){
	   cout << "Error" << endl;
	}
	else {
	   cin >> strokes;
	   
	   switch (strokes - par){
	      case -2:
	         name = "Eagle";
	         break;
	         
	      case -1:
	         name = "Birdie";
	         break;
	         
	      case 0:
	         name = "Par";
	         break;
	         
	      default:
	         name = "Bogey";
	         break;
	   }
	   
	   cout << name << endl;
	      
	}
	

	return 0;
}