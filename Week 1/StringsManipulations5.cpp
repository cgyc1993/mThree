#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    string output = "";

    getline(cin, input);

    for (int i = 0; i < input.size(); i++){
        if (isupper(input.at(i))){
            output += input.at(i);
        }
    }

    cout << output << endl;
}