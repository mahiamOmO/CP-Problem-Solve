#include <stdio.h>

// Function to compute factorial of a number
long long factorial(int n) {
    if (n == 0) {
        return 1; // By definition, 0! = 1
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read each number N
        printf("%lld\n", factorial(N)); // Compute and print factorial of N
    }

    return 0;
}
