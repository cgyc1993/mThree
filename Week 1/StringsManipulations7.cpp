#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    string output;

    getline(cin, input);

    for (int i = 0; i < input.size(); i++){
        if (isalpha(input.at(i))){
            output += char(input.at(i) + 1);
        }
        else{
            output += input.at(i);
        }
    }

    cout << output << endl;
}