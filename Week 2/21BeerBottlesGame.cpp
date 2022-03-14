#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int computerPick(int bottles){
    int picked = 0;

    if (bottles <= 5){
        picked = (bottles - 1);
    }
    else if (bottles <= 10){
        picked = (bottles - 6);
    }
    else if (bottles <= 15){
        picked = (bottles - 11);
    }else if (bottles <= 20){
        picked = (bottles - 16);
    }

    cout << "Computer has picked " << picked << endl;
    return picked;
}

int main(){
    int bottles = 21;
    string goFirst;
    int input;


    cout << "There are 21 beer bottles..." << endl;
    cout << "Computer and yourself, there are 2 players" << endl;
    cout << "At a time, each one can pick up any no. of bottles between 1 and 4 (inclusive)" << endl;
    cout << "Will you like to play first?" << endl;
    cin >> goFirst;

    if (goFirst == "Yes"){
        while (bottles > 1){
            cout << "How many you would like to pick up?" << endl;
            cin >> input;
            bottles -= input;

            bottles -= computerPick(bottles);
            
            cout << "The bottles remaining are: " << bottles << endl;

            if (bottles == 1){
                cout << "You will have to pick up the last..you are loser" << endl;
            }
        }
    }
}