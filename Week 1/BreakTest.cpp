#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    bool isPrime = true;
    int counter = 0;
    

    for (int i = 1; i <= 100; i++){
        for (int j = 2; j <= sqrt(i); j++){
            if ( i % j == 0 && i != j ){
                isPrime = false;
                break;
            }
        }

        if (isPrime && i != 1){
            counter++;
            cout << i << " ";
        }
        else {
            isPrime = true;
        }
    }

    cout << counter << endl;
}