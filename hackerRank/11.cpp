#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a + b << endl;
    
    char c = b.at(0);
    
    b.at(0) = a.at(0);
    a.at(0) = c;
    
    cout << a << " " << b << endl;
  
    return 0;
}
