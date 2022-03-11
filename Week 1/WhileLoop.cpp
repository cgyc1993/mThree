#include <iostream>
using namespace std;

int main(){
    int input;
    int reverse = 0;

    cin >> input;

    int temp = input;

    while (temp > 0){
        reverse = reverse * 10 + temp % 10;

        temp /= 10;
    }
    
    if (reverse == input){
        cout << "palindrome" << endl;
    }
    else {
        cout << "NOT palindrome" << endl;
    }
}