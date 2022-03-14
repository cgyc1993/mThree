#include <iostream>
#include <string>

#include "Bottles.cpp"

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
    Bottles b;
    string goFirst;
    int input;
    bool correctInput = false;


    cout << "There are 21 beer bottles..." << endl;
    cout << "Computer and yourself, there are 2 players" << endl;
    cout << "At a time, each one can pick up any no. of bottles between 1 and 4 (inclusive)" << endl;
    cout << "Will you like to play first?" << endl;
    cin >> goFirst;

    if (goFirst == "Yes"){
        while (b.GetRemainingBottles() > 1){
            while (!correctInput){
                cout << "How many you would like to pick up?" << endl;
                cin >> input;

                if (input >= 1 && input <= 4){
                    correctInput = true;
                }
                else{
                    cout << "Please enter any number between 1 and 4 only!!!" << endl;
                }
            }

            correctInput = false;

            b.Picked(input);

            b.Picked(computerPick(b.GetRemainingBottles()));
            
            b.PrintRemaining();

            if (b.GetRemainingBottles() == 1){
                cout << "You will have to pick up the last..you are loser" << endl;
            }
        }
    }
}