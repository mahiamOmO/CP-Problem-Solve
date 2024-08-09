#include <iostream>

int main() {
    char X;
    std::cin >> X;


    if (X >= 'a' && X <= 'z') {
        
        X = X - 32;
    } else if (X >= 'A' && X <= 'Z') {
    
        X = X + 32;
    }

    std::cout << X << std::endl;

    return 0;
}
