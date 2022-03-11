#include <iostream>
#include <vector>
using namespace std;

int main(){
    bool isPrime = true;

    for (int i = 1; i <= 100; i++){
        for (int j = 2; j < i; j++){
            if ( i % j == 0 && i != j ){
                isPrime = false;
                break;
            }
        }

        if (isPrime && i != 1){
            cout << i << " ";
        }
        else {
            isPrime = true;
        }
    }

    cout << endl;
}