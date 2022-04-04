#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
struct Optimizer{
    Optimizer() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};

Optimizer opt;

/*Write the class AddElements here*/
template <class T> class AddElements {
    private:
        T element;
        
    public:
        AddElements (T& arg) {
            element = arg;
        }
        
        const T add(T& arg) {
            element += arg;
            return element;
        }
        
        ~AddElements() {}
};

template <>class AddElements <string> {
    public:
        string element;
        AddElements (string& arg) {element=arg;}
        const string concatenate(string& arg) {
            // element += arg;
            element.append(arg);
            return element;
        }
        ~AddElements() {}
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
