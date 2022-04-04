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
    
    int m;
    int input;
    cin >> m;
    
    for (int i = 0; i < m; i++){
        cin >> input;
        
        vector <int>::iterator low = lower_bound(nums.begin(), nums.end(), input);
        
        if (nums.at(low - nums.begin()) == input)
        {
            cout << "Yes " << (low - nums.begin() + 1) << endl;
        }
        else
        {
            cout << "No " << (low - nums.begin() + 1) << endl;
        }
    }

    return 0;
}
