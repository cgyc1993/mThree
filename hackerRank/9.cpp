#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m;
    
    cin >> n >> m;
    
    int *arr[n];
    int *query[m];
    int size;
    
    for (int i = 0; i < n; i++){
        cin >> size;
        int *tmpArr = new int[size];
        
        for (int j = 0; j < size; j++){
            cin >> tmpArr[j];
        }
        
        arr[i] = tmpArr;
    }  
    
    for (int i = 0; i < m; i++){
        int *tmpArr = new int[2];
        for (int j = 0; j < 2; j++){
            cin >> tmpArr[j];
        }
        
        query[i] = tmpArr;
    }  
    
    for (int i = 0; i < m; i++){
        int row = *(query[i]);
        int index = *(query[i] + 1);
        cout << *(arr[row] + index) << endl;
    }    
    
    return 0;
}
