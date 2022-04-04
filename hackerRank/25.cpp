#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        string resultA = "";
        long long intA = A / 1;
        int temp;
        
        while (intA > 0){
            temp = intA % 16;
            if (temp < 10){
                resultA = to_string(temp) + resultA;
            }
            else {
                resultA = char('a' + (temp - 10)) + resultA;
            }
            
            intA /= 16;
        }
        
        resultA = "0x" + resultA;
        
        ostringstream resultB;
        
        if (B >= 0){
            resultB << "+";
        }
        else{
            resultB << "-";
        }
        
        resultB << fixed << setprecision(2) << B;
        
        cout << right << setw(0) << resultA << endl;
        cout << setfill('_') << setw(15) << right << resultB.str() << endl;
        cout << scientific << setprecision(9) << C << endl;
	}
	return 0;

}