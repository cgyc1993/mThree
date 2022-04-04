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
    
    int rm;
    int rmS;
    int rmE;
    
    cin >> rm >> rmS >> rmE;
    
    nums.erase(nums.begin() +rm - 1);
    
    nums.erase(nums.begin() + rmS - 1, nums.begin() + rmE - 1);
    
    cout << nums.size() << endl;
    
    for (int i = 0; i < nums.size(); i++){
        cout << nums.at(i) << " ";
    }
    
    cout << endl;
    
    return 0;
}
