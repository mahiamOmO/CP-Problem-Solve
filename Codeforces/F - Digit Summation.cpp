#include <iostream>

int main() {
    unsigned long long N, M;
    std::cin >> N >> M;

    int lastDigitN = N % 10;
    int lastDigitM = M % 10;

    int result = lastDigitN + lastDigitM;

    std::cout << result << std::endl;

    return 0;
}
