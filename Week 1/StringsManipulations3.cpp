#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    char temp;

    getline(cin, input);

    temp = input.at(0);

    input.at(0) = input.at(input.size() - 1);

    input.at(input.size() - 1) = temp;

    cout << input << endl;
}