#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;

    cin >> input;

    for (int i = input.size() - 1; i >= 0; i--){
        cout << input.at(i);

        if (i != 0){
            cout << "-";
        }
        else {
            cout << endl;
        }
    }
}