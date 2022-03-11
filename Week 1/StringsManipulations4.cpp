#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    string maxWord = "";
    string curWord = "";

    getline(cin, input);

    for (int i = 0; i < input.size(); i++){
        if (isalpha(input.at(i))){
            curWord += input.at(i);
        }
        else {
            if (curWord.size() > maxWord.size()){
                maxWord = curWord;
            }
            curWord = "";
        }
    }

    if (curWord.size() > maxWord.size()){
        maxWord = curWord;
    }

    cout << maxWord << endl;
}