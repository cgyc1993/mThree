#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int q;
    string str;
    int v;
    
    map<string, int> m;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> q;
        
        switch(q){
            case 1: 
                cin>> str >> v;
                
                if (m.find(str) != m.end()){
                    m[str] += v;
                }
                else{
                    m.insert( make_pair(str,v) );
                }
                break;
            
            case 2: 
                cin>> str;
            
                m.erase(str);
                break;
            
            case 3: 
                cin>> str;
            
                if (m.find(str) != m.end()){
                    cout << m[str] << endl;
                }
                else{
                    cout << 0 << endl;
                }
                break;
        }
    }
    
    return 0;
}
