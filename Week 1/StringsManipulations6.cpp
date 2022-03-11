#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    string output = "";
    string curWord = "";
    int index = 0;

    getline(cin, input);

    for (int i = 0; i < input.size(); i++){
        if (isalpha(input.at(i))){
            curWord += input.at(i);
        }
        else {

            output += toupper(curWord.at(index));
            index++;
            curWord = "";
        }
    }

    output += toupper(curWord.at(index));

    cout << output << endl;
}