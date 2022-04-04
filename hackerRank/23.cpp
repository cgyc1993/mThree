#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int q;
    int val;
    set<int> s;
    
    cin >> n;
      
    for (int i = 0; i < n; i++){
        cin >> q >> val;
        
        switch(q){
            case 1:
                s.insert(val);
                break;
            
            case 2:
                s.erase(val);
                break;
            
            case 3:
                if (s.find(val) != s.end()){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
                break;
            
        }
    }
    return 0;
}



