#include <iostream>

int main() {
    unsigned int N;
    std::cin >> N;

    unsigned long long sum = static_cast<unsigned long long>(N) * (N + 1) / 2;

    std::cout << sum << std::endl;

    return 0;
}
