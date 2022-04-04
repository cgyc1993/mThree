#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int val3;
    int max;

    cin >> val1;
    cin >> val2;
    cin >> val3;

    if (val1 >= val2 && val1 >= val3){
       max = val1;
    }
    else if (val2 >= val1 && val2 >= val3){
       max = val2;
    }
    else{
       max = val3;
    }
    
    cout <<max << endl;
    
    return 0;
}