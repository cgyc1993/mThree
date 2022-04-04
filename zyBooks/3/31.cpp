#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;

	cin >> first;
	cin >> last;
	cin >> number;
	
	if (last.size() > 5){
	   last = last.substr(0, 5);
	}
	
	login = last + first[0] + to_string(number%100);
	
	cout << "Your login name: " << login << endl;
	
	return 0;
}