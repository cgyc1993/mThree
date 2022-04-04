#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums.at(i);
    }
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n; i++){
        cout << nums.at(i) << " ";
    }
    
    cout << endl;
    
    return 0;
}
