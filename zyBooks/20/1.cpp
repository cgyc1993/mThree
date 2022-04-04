#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int max;
    
    cin >> val1;
    cin >> val2;
    
    if (val1 >= val2){
       max = val1;
    }
    else {
       max = val2;
    }
    
    cout << max << endl;
    
    return 0;
}