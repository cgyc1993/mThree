#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> result;
    
    stringstream ss(str);
    char c;
    int n;
    
    
    
    
    while(!ss.eof()){
        ss >> n;
        result.push_back(n);
        ss >> c;
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
