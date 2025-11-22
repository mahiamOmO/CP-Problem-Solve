#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    
    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;


    int result = (A * B * C * D) % 100;

    
    if (result < 10) {
        cout << "0";
    }
    cout << result << endl;

    return 0;
}
