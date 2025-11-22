#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    

    double logA = log(A);
    double logC = log(C);
    
    
    if (B * logA > D * logC) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}