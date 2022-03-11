#include <iostream>
using namespace std;

int main(){
    int input;
    unsigned long long result = 1;

    cin >> input;

    for (int i = 1; i <= input; i++){
        result *= i;
    }

    cout << result << endl;
}