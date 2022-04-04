#include <iostream>
#include <iomanip>   
#include <math.h>    
using namespace std;

int main() {
    int people;
    int numPizzas;
    double cost;

    cin >> people;
    
    numPizzas = ceil(people * 2.0 / 12.0);
    cost = 14.95 * numPizzas;
    
    cout << "Pizzas: " << numPizzas << endl;
    cout << fixed << setprecision(2);
    cout << "Cost: $" << cost << endl;
    
}