#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int i = 0;
    int previous = 0;
    int current = 1;
    int temp;

    do {
        if(i == 0){
            current = 0;
        }
        else if (i == 1){
            current = 1;
        }
        else {
            temp = previous;
            previous = current;
            current += temp;
        }

        cout << current << " ";

        i++;
    } while (i <= n);

    cout << endl;
}