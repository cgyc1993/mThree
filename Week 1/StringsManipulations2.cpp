#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    string output = "";
    string numOfx = "";

    cin >> input;

    for (int i = 0; i < input.size(); i++){
        if (input.at(i) == 'x'){
            numOfx += "x";
        }
        else{
            output += input.at(i);
        }
    }

    output += numOfx;

    cout << output << endl;
}